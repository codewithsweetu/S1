/*Write a Program to read a text file and copy it to another text file.*/
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main() {
    system("cls");      //clrscr();
    char sourceFile[20];
    char destinationFile[20];

    cout << "Enter the source filename: ";
    cin.getline(sourceFile, 20);

    cout << "Enter the destination filename: ";
    cin.getline(destinationFile, 20);

    ifstream inputFile(sourceFile);
    if (!inputFile) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    ofstream outputFile(destinationFile);
    if (!outputFile) {
        cout << "Error opening destination file!" << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch)) {
        outputFile << ch;
    }

    inputFile.close();
    outputFile.close();

    cout << "File copied successfully!" << endl;
    getch();
    return 0;
}

/*
Output : 
Enter the source filename: test1.txt
Enter the destination filename: test2.txt
File copied successfully!


*/