#include <iostream>

using namespace std;

class Skat
{
    public:
        Skat(const string &name = "bob", int stimPaks = 15) {
            _name = name;
            _stimPaks = stimPaks;
        };
        ~Skat() {};

        int stimPaks() { return _stimPaks; };

        const string &name() { return _name; };

        void shareStimPaks(int number , Skat &stock) {
            if (_stimPaks < number)
                cout << "Don't be greedy" << endl;
            else {
                _stimPaks -= number;
                cout << "Keep the change" << endl;
            }
        };

        void addStimPaks(unsigned int number) {
            _stimPaks += number;
            if (number == 0) cout << "Hey boya, did you forget something ?" << endl;
        };

        void useStimPaks() {
            if (_stimPaks >= 1)
                cout << "Time to kick some ass and chew bubble gum" << endl;
            else
                cout << "Mediiiiiic" << endl;
        };

        void status() {
            cout << "Soldier " << _name << " reporting " << _stimPaks << " stimpaks remaining sir!" << endl;
        };

    private:
        string _name;
        int _stimPaks;
};