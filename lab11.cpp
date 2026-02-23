// COMSC-210 | Lab 11 | Seoyeon An

#include <iostream>
#include <string>

using namespace std;

struct Visitor {
    string name;
    string studentId;
    int age;
} ;

int main() {
    int count;
    cout << "How many DVC visiting students?";
    cin >> count;
    cin.ignore();

    Visitor* roster = new Visitor[count];

    for (int i = 0; i < count; i++) {
        cout << "Visitor" << i + 1 << endl;

        cout << "Name:";
        getline(cin, roster[i].name);

        cout << "Id:";
        getline(cin, roster[i].studentId);

        cout << "Age:";
        cin >> roster[i].age;
        cin.ignore();
    }

    cout << " Summary";
    for (int i = 0; i < count; i++) {
        cout << roster[i].name << "|"
             << roster[i].studentId <<"|"
             << roster[i].age << endl;
    }

    delete[] roster;
    return 0;
}