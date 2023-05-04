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




}


    return 0;
}

