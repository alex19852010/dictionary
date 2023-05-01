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


    cout << "enter number:";
    cin >> number;
    cout << "enter surname:";
    cin >> surname;
    numbertosurname.insert(pair <string, string> (number, surname));
    surnametonumber.insert(pair <string, vector <string>> (surname, vector <string>()));
    surnametonumber[0].push_back(number);

    map <string, vector <string>> :: iterator it = surnametonumber.find(surname);
    cout << it->second[0] << endl;
    cout << endl;





    return 0;
}





