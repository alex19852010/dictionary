#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

map<string, string> numbertosurname;
map<string, vector<string >> surnametonumber;

string number;
string surname;
string choice;

int main() {
    while (1) {
        while (choice != "number" && choice != "surname") {
            cout << "enter number:";
            cin >> number;
            cout << "enter surname:";
            cin >> surname;

            numbertosurname.insert(pair<string, string>(number, surname));
            auto its = surnametonumber.find(surname);
            if (its != surnametonumber.end()) {
                surnametonumber[surname].push_back(number);
            } else {
                surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));
                surnametonumber[surname].push_back(number);
            }

            cout << "if you want to know number, enter number, if you want to know surname, enter surname:" << endl;
            cout << "make a choice: ";
            cin >> choice;

        }

        if (choice == "surname") {
            cout << "enter number:";
            cin >> number;
            auto it = numbertosurname.find(number);

            if (it != numbertosurname.end()) {
                cout << it->second << endl;
                choice = "";
                continue;
            } else {
                cout << "invalid number" << endl;
                choice = "";
                continue;
            }

        }

        if (choice == "number") {
            cout << "enter surname:";
            cin >> surname;
            auto m = surnametonumber.find(surname);

            if (m != surnametonumber.end()) {
                for (int i = 0; i < m->second.size(); i++) {
                    cout << m->second[i] << " ";
                }
                cout << endl;
                choice = "";
                continue;
            } else {
                cout << "invalid surname" << endl;
                choice = "";
                continue;
            }


        }

    }


    return 0;

}