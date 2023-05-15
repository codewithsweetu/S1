/*Write a C++ Program to sort two numbers using call by reference */
#include <iostream>
#include<conio.h>
using namespace std;
void swapNumbers(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void sortNumbers(int& num1, int& num2) {
    if (num1 > num2) {
        swapNumbers(num1, num2);
    }
}

int main() {
    int number1, number2;
    system("cls"); //clrscr();
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    sortNumbers(number1, number2);
    cout << "The sorted numbers are: " << number1 << " and " << number2 <<endl;
    getch();

    return 0;
}
/*
Output 1 :
Enter the first number: 5
Enter the second number: 1
The sorted numbers are: 1 and 5


*/
/*
Output 2 :
Enter the first number: 1
Enter the second number: 3
The sorted numbers are: 1 and 3


*/