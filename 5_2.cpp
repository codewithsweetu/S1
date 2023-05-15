/*
Given that an EMPLOYEE class contains following  members:  Employee  number, Employee name, Basic, DA, IT, Net Salary and print data members using Object.
*/
#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>

using namespace std;

class employ {
private:
    char* empNumber;
    char* empName;
    float basic;
    float DA;
    float IT;
    float netSalary;

public:
    void setData(const char* number, const char* name, float basicSalary) {
        empNumber = new char[strlen(number) + 1];
        strcpy(empNumber, number);

        empName = new char[strlen(name) + 1];
        strcpy(empName, name);

        basic = basicSalary;
    }

    void calculateNetSalary() {
        DA = 0.8 * basic; // Assuming 80% of the basic salary as DA
        IT = 0.1 * basic; // Assuming 10% of the basic salary as IT
        netSalary = basic + DA - IT;
    }

    void displayInfo() {
        cout << setw(20) << "Employee Number: " << setw(15) << empNumber << endl;
        cout << setw(20) << "Employee Name: " << setw(15) << empName << endl;
        cout << setw(20) << "Basic Salary: " << setw(15) << basic << endl;
        cout << setw(20) << "DA: " << setw(15) << DA << endl;
        cout << setw(20) << "IT: " << setw(15) << IT << endl;
        cout << setw(20) << "Net Salary: " << setw(15) << netSalary << endl;
    }
};

int main() {
    employ emp;
    system("cls"); //clrscr();
    emp.setData("E001", "John Doe", 50000.0);
    emp.calculateNetSalary();
    emp.displayInfo();

    getch();
    return 0;
}
/*
Output : 
   Employee Number:            E001
     Employee Name:        John Doe
      Basic Salary:           50000
                DA:           40000
                IT:            5000
        Net Salary:           85000

*/