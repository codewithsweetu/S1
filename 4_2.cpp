/*Write  a  C++  program  to  multiply two numbers using inline function.*/
#include <iostream>
#include <conio.h>
using namespace std;
inline int multiplyNumbers(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int number1, number2;
    system("cls"); //clrscr();
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    int result = multiplyNumbers(number1, number2);
    cout << "The product of the two numbers is: " << result << endl;
    getch();
    return 0;
}

/*
Output :
Enter the first number: 2
Enter the second number: 2
The product of the two numbers is: 4


*/