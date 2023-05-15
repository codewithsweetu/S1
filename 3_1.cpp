/*Write a program to convert km to cm, meter, inch and feet using manipulators endl, setw, setfill and setprecision.*/

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(void)
{
    double km;
    system("cls");  // clrscr();
    cout<<"Enter a distance in kilometers : ";
    cin >> km;

    double cm = km * 100000;
    double m = km * 1000;
    double inch = km * 39370.1;
    double feet = km * 3280.84;

    cout << setfill('-') << setw(35) << "" << endl;
    cout << setfill(' ') << fixed << setprecision(2);
    cout << setw(15) << "Killometers : " << setw(10) << km << endl;
    cout << setw(15) << "Centimeters : " << setw(10) << cm << endl;
    cout << setw(15) << "Meters : " << setw(10) << m << endl;
    cout << setw(15) << "Inches : " << setw(10) << inch << endl;
    cout << setw(15) << "Feet : " << setw(10) << feet << endl;

    getch();
}

/*
Output :
Enter a distance in kilometers : 2
-----------------------------------
 Killometers :       2.00
 Centimeters :  200000.00
      Meters :    2000.00
      Inches :   78740.20
        Feet :    6561.68


*/