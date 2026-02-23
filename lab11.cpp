// COMSC-210 | Lab 11 | Seoyeon An

#include <iostream>
#include <string>
using namespace std;

struct Visitor {
    string name;
    string studentId;
    int age;
    int nrWorkshops;
    string* workshops;
} ;

int main() {
    int count;
    cout << "How many DVC visiting students?";
    cin >> count;
    cin.ignore();

    Visitor* roster = new Visitor[count];

    for (int i = 0; i < count; i++) {
        roster[i].workshops = nullptr;
        roster[i].nrWorkshops = 0;
    }

    for (int i = 0; i < count; i++) {
        cout << "Visitor" << i + 1 << endl;

        cout << "Name:";
        getline(cin, roster[i].name);

        cout << "Id:";
        getline(cin, roster[i].studentId);

        cout << "Age:";
        cin >> roster[i].age;
        cin.ignore();


        cout << "How many workshops? ";
        cin >> roster[i].nrWorkshops;
        cin.ignore();

        if (roster[i].nrWorkshops > 0) {
            roster[i].workshops =
                new string[roster[i].nrWorkshops];

            for (int j = 0; j < roster[i].nrWorkshops; j++) {
                cout << "Workshop #" << j + 1 << ": ";
                getline(cin, roster[i].workshops[j]);
            }
        }
    
    }

    cout << " Summary";
    for (int i = 0; i < count; i++) {
        cout << roster[i].name << "|"
             << roster[i].studentId <<"|"
             << roster[i].age << endl;
    }

    delete[] roster;
    return 0;
