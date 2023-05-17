/*Write  a  program  to  overload  the  max function.
(1) Find the max number from three numbers.
(2) Find  the  max  string  from  three strings.*/
#include <iostream>
#include <cstring>
#include <conio.h>
#define N 100
using namespace std;


int max(int num1, int num2, int num3) {
    int maxNum = num1;
    if (num2 > maxNum) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }
    return maxNum;
}


char* max(char* str1, char* str2, char* str3) {
    char* maxStr = str1;
    if (strcmp(maxStr, str2) > 0) {
        maxStr = str2;
    }
    if (strcmp(maxStr, str3) > 0) {
        maxStr = str3;
    }
    return maxStr;
}

int main() {
    int num1, num2, num3;
    system("cls"); //clrscr();
    cout << "Enter three numbers(Max 20 characters): \n";
    cin >> num1 >> num2 >> num3;
    int maxNumber = max(num1, num2, num3);
    cout << "The maximum number is: " << maxNumber << endl;

    char str1[N], str2[N], str3[N];
    cout << "Enter three strings: \n";
    cin >> str1 >> str2 >> str3;
    char* maxString = max(str1, str2, str3);
    cout << "The maximum string is: " << maxString << endl;
    getch();

    return 0;
}

/*
Output : 
Enter three numbers(Max 20 characters):
7
2
0
The maximum number is: 7
Enter three strings: 
a
ab
abc
The maximum string is: abc


*/
