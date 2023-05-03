#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

map <string, string> numbertosurname;
map <string, vector <string>> surnametonumber;

int main() {

    string number;
    string surname;
    vector <string> name;
    int count = 0;
    int chooise = 0;

    while(1)
    {
        cout << "enter number:";
        cin >> number;
        cout << "enter surname:";
        cin >> surname;
        numbertosurname.insert(pair <string, string> (number, surname));
        surnametonumber.insert(pair <string, vector <string>> (surname, vector <string>()));


        for(map <string, string> :: iterator it = numbertosurname.begin(); it != numbertosurname.end(); it ++)
        {
            if (it->second == surname)
            {
                count ++;
                break;
            }
        }



        if(count != 0)
        {
            surnametonumber[surname].push_back(number);
        }

        else
        {
            surnametonumber[surname].push_back(number);
        }





    cout << "enter surname:";
    cin >> surname;

    map <string, vector <string>> :: iterator its = surnametonumber.find(surname);
    for(int i = 0; i < its->second.size(); i ++)

    {
        cout << its->second[i] << endl;
    }

    }
    return 0;
}











