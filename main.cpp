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
string val;
int count = 0;

int main() {
    while (1) {

            cout << "add number:";
            cin >> number;
            cout << "add surname:";
            cin >> surname;

            numbertosurname.insert(pair<string, string>(number, surname));

            auto its = surnametonumber.find(surname);
            if (its != surnametonumber.end()) {
                for (int i = 0; i < its->second.size(); i++) {
                    if(number == its->second[i])
                    {
                        count ++;
                    }
                }
            }


        if (its != surnametonumber.end() && count == 0) {

            surnametonumber[surname].push_back(number);
        }

            if(its == surnametonumber.end()) {
                surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));
                surnametonumber[surname].push_back(number);
            }

            cout << "enter number abonent:" << endl;
            cin >> choice;


            auto it = numbertosurname.find(choice);
            if (it != numbertosurname.end()) {
                val = it->second;
                cout << it->second << " ";
                count = 0;

            } else {
                cout << "invalid number" << endl;
                count = 0;
                continue;
            }


            auto m = surnametonumber.find(val);
            if (m != surnametonumber.end()) {
                for (int i = 0; i < m->second.size(); i++) {
                    cout << m->second[i] << " ";
                }
                cout << endl;
                count = 0;
                continue;

            } else {
                cout << "invalid surname" << endl;
                count = 0;
                continue;
            }


        }




    return 0;

}