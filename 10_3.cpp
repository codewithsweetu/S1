/*Write a C++ program to demonstrate use of parameterized constructor.*/
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
class Student{
private:
int rollno; 
char name[20]; 
float marks;
public: 
Student(int roll, char nam[20],float mar){
    rollno = roll; 
    strcpy(name, nam); 
    marks = mar;
}
void display(){
    cout << "Name : " << name << endl ;
    cout << "Roll No." << rollno << endl ;
    cout << "Marks : " << marks << endl ;
}

};
int main() {
    system("cls");      //clrscr();
    Student s1(1, "Sweetu", 350);
    Student s2=Student(2, "Sweetie", 400);
    s1.display();
    s2.display();
    getch();

    return 0;
}

/*
Output :
Name : Sweetu
Roll No.1
Marks : 350
Name : Sweetie
Roll No.2
Marks : 400


*/