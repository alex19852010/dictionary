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
        cout << "enter number:";
        cin >> number;
        cout << "enter surname:";
        cin >> surname;
        numbertosurname.insert(pair<string, string>(number, surname));
//      surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));

 if(numbertosurname.find(surname) != numbertosurname.end())
 {
     surnametonumber[surname].push_back(number);
 }
 else
     surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));

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


    return 0;
}

