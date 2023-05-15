#include <iostream>
#include <conio.h>
using namespace std;

double calculateArea(double radius, double pi = 3.14159) {
    return pi * radius * radius;
}

int main() {
    double radius;
    system("cls"); // clrscr();
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = calculateArea(radius);
    cout << "The area of the circle is: " << area << endl;
    getch();
    return 0;
}
/*
Output 1 : 
Enter the radius of the circle: 2
The area of the circle is: 12.5664


*/
/* 
Output 2 : 
Enter the radius of the circle: 1
The area of the circle is: 3.14159


*/