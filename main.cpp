#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;


map<string, string> numbertosurname;
map<string, vector<string>> surnametonumber;

int main() {
    string number;
    string surname;
    vector<string> name;
    string choice;

    while (1) {
        int count = 0;
        cout << "enter number:";
        cin >> number;
        cout << "enter surname:";
        cin >> surname;
        numbertosurname.insert(pair<string, string>(number, surname));
//        surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));


        for (map<string, string>::iterator it = numbertosurname.begin(); it != numbertosurname.end(); it++) {
            if (it->second == surname) {
                count++;
                break;
            }
        }


        if (count != 0) {
            surnametonumber[surname].push_back(number);
            surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));

        } else {

            surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));
        }


        cout << "if you want know the number click surname or if you want know the surname click number." << endl;
        cout << "click  surname or number:";
        cin >> choice;

        if (choice == "number") {
            cout << "enter number:";
            cin >> number;
            map<string, string>::iterator it = numbertosurname.find(number);
            cout << it->second << endl;

        } else if (choice == "surname") {
            cout << "enter surname:";
            cin >> surname;

            map<string, vector<string>>::iterator its = surnametonumber.find(surname);
            for (int i = 0; i < its->second.size(); i++) {
                cout << its->second[i] << " ";
            }
            cout << endl;
        } else {
            cout << "invalid information" << endl;

        }

    }
cout << "hello footbal";
    return 0;
}

