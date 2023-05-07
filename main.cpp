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
                if (number == its->second[i]) {
                    count++;
                }
            }
        }


        if (its != surnametonumber.end() && count == 0) {

            surnametonumber[surname].push_back(number);
        }

        if (its == surnametonumber.end()) {
            surnametonumber.insert(pair<string, vector<string>>(surname, vector<string>()));
            surnametonumber[surname].push_back(number);
        }

        cout << "enter number abonent:" << endl;
        cin >> choice;

        auto it = numbertosurname.find(choice);

        if (it != numbertosurname.end()) {
            choice = it->second;
            cout << it->second << " ";

//         else {
//            cout << "invalid number" << endl;
//            continue;
//        }

        auto m = surnametonumber.find(choice);
        for (int i = 0; i < m->second.size(); i++) {
            cout << m->second[i] << " ";
        }
        cout << endl;
        continue;
        }

        else
        {
            auto d = surnametonumber.find(choice);
            if(d != surnametonumber.end())
            {

                for (it = numbertosurname.begin(); it != numbertosurname.end(); it ++) {
                    if (choice == it->second) {
                        choice = it->first;
                    }
                }
                auto b = numbertosurname.find(choice);

                if (b != numbertosurname.end()) {
                    choice = b->second;
                    cout << b->second << " ";


                    auto m = surnametonumber.find(choice);
                    for (int i = 0; i < m->second.size(); i++) {
                        cout << m->second[i] << " ";
                    }
                    cout << endl;
                    continue;
                }
            }

            else
            {
                cout << "invalid number or surname" << endl;
                continue;
            }
        }
    }


    return 0;

}