#include <fstream>
#include <iostream>
#include <type_traits>

using namespace std;

//cat a file based on his path
int CatFile(string filename)
{
    ifstream file(filename.c_str());

    //file not found permission denied etc
    if (!file) {
        cerr << "MyCat : " << filename << " : No such file or directory" << endl;
        return 84;
    }

    //get length of file
    file.seekg(0, file.end);
    int length = file.tellg();
    file.seekg(0, file.beg);

    //storage data
    char *buffer = new char[length];

    //read and print contents
    file.read(buffer, length);
    cout << buffer << endl;

    return 0;
}

//cat many files based on their paths
template <typename ... Args>
int CatFiles(string filename, Args... args)
{
    //check file type validity
    if (!(is_same<Args, string>::value && ...)) {
        cerr << "Please only provide string args" << endl;
        return 84;
    }

    //return status
    int result = CatFile(filename);

   ((result == 0 ? result = CatFile(args) : CatFile(args)), ...);

    return result;
}

int main(int argc, char **argv)
{
    //return value
    int result = 0;

    //invalid number of arguments
    if (argc < 2)
        return 84;

    for (int i = 1; i < argc; i++)
        result == 0 ? result = CatFile(argv[i]) : CatFile(argv[i]);

    return (result);
}