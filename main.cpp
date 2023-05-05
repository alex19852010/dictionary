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
    while(1)
    {
        while (choice != "number" && choice != "surname") {
            cout << "enter number:";
            cin >> number;
            cout << "enter surname:";
            cin >> surname;

            numbertosurname.insert(pair<string, string> (number,surname));
            cout << "if you want to know number, enter number, if you want to know surname, enter surname:" << endl;
            cout << "make a choice: ";
            cin >> choice;

        }

        if(choice == "surname")
            cout << "enter number:";
        cin >> number;
        auto it = numbertosurname.find(number);
        if(it != numbertosurname.end())
        {
            cout << it->second << endl;
            choice = "";
            continue;
        }
        else
        {
            cout << "invalid number" << endl;
            choice = "";
            continue;
        }



    }


    return 0;

}