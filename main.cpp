#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    string number;
    string surname;

    while(1)
    {
        cout << "enter number:";
        cin >> number;
        cout << "enter surname:";
        cin >> surname;

        map <string, string> directory;
        directory.insert(pair <string, string> (number, surname));
        string command;
        cout << "if you want to find the number,enter the word surname,if you want to find the surname,enter the word number:";
        cin >> command;

        if(command == "surname")
        {
            cout << "enter surname:";
            cin >> surname;
            for(map <string, string> :: iterator it = directory.begin(); it != directory.end(); it ++)
            {
                if(surname == it->second)
                {
                    cout << it->first << endl;
                }
            }

        }

        else if(command == "number")
        {
            cout << "enter number:";
            cin >> number;
            for(map <string, string> :: iterator it = directory.begin(); it != directory.end(); it ++)
            {
                if(number == it->first)
                {
                    cout << it->second << endl;
                }
            }
        }
        else
        {
            cout << "incorrect information" << endl;
            continue;
        }

    }


    return 0;
}

