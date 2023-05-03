#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

map<string, string> numbertosurname;
multimap<string, string> surnametonumber;

int main() {


    string number;
    string surname;
    vector<string> name;
    string choice;


    while (1) {


        cout << "enter number:";
        cin >> number;
        cout << "enter surname:";
        cin >> surname;
        numbertosurname.insert(pair<string, string>(number, surname));
        surnametonumber.insert(pair<string, string>(surname, number));

        cout << "if you want to find the phone enter surname, if you want to find the surname enter number" << endl;
        cout << "make a choice: ";
        cin >> choice;

        if (choice == "number") {
            cout << "what number find:";
            cin >> number;
            auto it = numbertosurname.find(number);

            if (it != numbertosurname.end()) {
                cout << it->second << endl;
            } else {
                cout << "invalid number" << endl;
            }
        }


        if (choice == "surname") {
            cout << "what surname find:";
            cin >> surname;
            auto its = surnametonumber.find(surname);


            if (its != surnametonumber.end()) {
                while (its->first == surname && its != surnametonumber.end()) {
                    cout << its->second << " ";
                    its++;
                }
                cout << endl;
            } else {
                cout << "invalid surname" << endl;
            }

        }


    }


    return 0;
}











