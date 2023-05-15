/*
Given that an EMPLOYEE class contains following  members:  Employee  number, Employee name, Basic, DA, IT, Net Salary and print data members using Object.
*/

#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>
using namespace std;

struct collageInfo {
    char* code;
    char* name;
    char* address;
    char* intake;
    char* contact;
};

void displayCollageInfo(const collageInfo& info) {
    cout << setw(20)<< "Code: "  << setw(15) << info.code << endl;
    cout << setw(20)<< "Name: "  << setw(15) << info.name << endl;
    cout << setw(20)<< "Address: "  << setw(15) << info.address << endl;
    cout << setw(20)<< "Intake: "  << setw(15) << info.intake << endl;
    cout << setw(20)<< "Contact: "  << setw(15) << info.contact << endl;
}

int main() {
    collageInfo my_collage;
    system("cls");
    my_collage.code = new char[30];
    my_collage.name = new char[30];
    my_collage.address = new char[50];
    my_collage.intake = new char[40];
    my_collage.contact = new char[10];

    strcpy(my_collage.code, "1234");
    strcpy(my_collage.name, "ABC College");
    strcpy(my_collage.address, "123 Main Street");
    strcpy(my_collage.intake, "2023");
    strcpy(my_collage.contact, "9876543210");

    displayCollageInfo(my_collage);
    delete[] my_collage.code;
    delete[] my_collage.name;
    delete[] my_collage.address;
    delete[] my_collage.intake;
    delete[] my_collage.contact;

    getch();
    return 0;
}
/*
Output :
              Code:            1234
              Name:     ABC College
           Address: 123 Main Street
            Intake:            2023
           Contact:      9876543210


*/