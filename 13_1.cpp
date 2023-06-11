/*Write a Program to read a text file and count number of characters in it.*/
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main() {
    system("cls");        //clrscr();
    char filename[20];
    cout << "Enter the filename: ";
    cin.getline(filename, 20);

    ifstream file(filename);
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int count = 0;
    char ch;
    while (file.get(ch)) {
        count++;
    }

    file.close();
    cout << "Number of characters in the file: " << count << endl;
    getch();
    return 0;
}

/*
Output : 
Enter the filename: 2_1.cpp
Number of characters in the file: 791


*/