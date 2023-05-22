#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 20;

class EMPLOYEE {
    char EMPCODE[MAX_SIZE];
    char EMPNAME[MAX_SIZE];

public:
    void getdata();
    void display();
};

void EMPLOYEE::getdata() {
    cout << "Enter Employee Code: ";
    cin.getline(EMPCODE, MAX_SIZE);

    cout << "Enter Employee Name: ";
    cin.getline(EMPNAME, MAX_SIZE);
}

void EMPLOYEE::display() {
    cout << "Employee Code: " << EMPCODE << endl;
    cout << "Employee Name: " << EMPNAME << endl;
}

int main() {
    int numEmployees;
    system("cls");
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    cin.ignore(); // Clear the input buffer

    EMPLOYEE* EMP = new EMPLOYEE[numEmployees];

    cout << "Enter details of " << numEmployees << " employees:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << endl << "Employee " << i + 1 << ":" << endl;
        EMP[i].getdata();
    }

    cout << endl << "Displaying details of " << numEmployees << " employees:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << endl << "Employee " << i + 1 << ":" << endl;
        EMP[i].display();
    }

    delete[] EMP;
    getch();

    return 0;
}
