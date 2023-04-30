#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> directory;


int main() {
    while (1) {
        string choice;
        string number;
        string surname;
        cout << "enter number:";
        cin >> number;
        cout << "enter surname:";
        cin >> surname;
        directory.insert(pair<string, string>(number, surname));

        cout << "if you want know the number click surname or if you want know the surname click number." << endl;
        cout << "click  surname or number:";
        cin >> choice;


        if (choice == "surname") {
            cout << "enter surname:";
            cin >> surname;
            int count_1 = 0;
            for (map<string, string>::iterator it = directory.begin(); it != directory.end(); it++) {
                if (surname == it->second) {
                    cout << it->first << " ";
                    count_1++;
                }

            }
            if (!count_1) {
                cout << "there is no such surname." << endl;
                continue;
            }

            cout << endl;

        } else if (choice == "number") {
            cout << "enter number:";
            cin >> number;
            int count_2 = 0;
            for (map<string, string>::iterator it = directory.begin(); it != directory.end(); it++) {
                if (number == it->first) {
                    cout << it->second << endl;
                    count_2++;
                }

            }
            if (!count_2) {
                cout << "there is no such number." << endl;
                continue;
            }
        } else {
            cout << "invalid information" << endl;
            continue;
        }
      cout << "yes";
      cout << "no";
    }
    return 0;
}

