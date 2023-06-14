#include "Student.hpp"
#include <fstream>

class Assistant
{
    public:
        Assistant(int ID) {
            _ID = ID;
            cout << "Assistant " << _ID << ": \'morning everyone *sip coffee*" << endl;
        };
        ~Assistant() {
            cout << "Assistant " << _ID << ": see you tomorrow at 9.00 *sip coffee*" << endl;
        };
        void GiveDrink(Student &student, string drink) {
            student.drink(drink);
            cout << "Assistant " << _ID << ": drink this, " << student.GetName() << " *sip coffee*" << endl;
        };

        string ReadDrink(std::string student) {
            ifstream StudentFile(student + ".drink");
            string drink;

            if (StudentFile) {
                getline(StudentFile, drink);
                StudentFile.close();
                cout << "Assistant " << _ID << ": " << student << "needs a " << drink << " *sip coffe*" << endl;
            }
            return drink;
        };

    private:
        int _ID;
};