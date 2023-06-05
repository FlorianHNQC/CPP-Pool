#include <iostream>
#include <regex>

using namespace std;

class Student {
    public:
        Student(string &name) {
            _name = name;
            _energyPoints = 100;
            cout << "Student " << name << ": I'm ready to learn C ++." << endl;
        };
        ~Student() {
            cout << "Student " << _name << ": Wow , much learning today , very smart , such C ++." << endl;
        };

        void modEnergy(int points) {
            _energyPoints += points;
            _energyPoints = _energyPoints < 0 ? 0 : (_energyPoints > 100 ? 100 : _energyPoints);
        };

        bool learn(string text) {
            if (_energyPoints >= 42) {
                modEnergy(-42);
                cout << "Student " << _name << ": " << text << endl;
                return true;
            }
            else {
                regex cpp("C\\+\\+");
                text = regex_replace(text, cpp, "shit");
                cout << "Student " << _name << ": " << text << endl;
                return false;
            }
        };

        void drink(string dr) {
            if (dr == "Red Bull") {
                modEnergy(32);
                cout << "Student " << _name << ": Red Bull gives you wings!" << endl;
            }
            else if (dr == "Monster") {
                modEnergy(64);
                cout << "Student " << _name << ": Unleash The Beast!" << endl;
            }
            else {
                modEnergy(1);
                cout << "Student " << _name << ": ah, yes... enslaved moisture." << endl;
            }
        }

    private:
        string _name;
        int _energyPoints;
};