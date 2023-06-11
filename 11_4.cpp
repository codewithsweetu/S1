/*Write  a  C++  program  to  demonstrate constructor call in the derived class.*/
#include <iostream>
#include <conio.h>
using namespace std;
class A{
    public :
    A(){
        cout << "I am A." << endl ;
    }
    ~A(){
        cout << "A is Destored." << endl ;
    }

};
class B:public A{
    public :
    B(){
        cout << "I am B." << endl ;
    }
    ~B(){
        cout << "B is Destored." << endl ;
    }
};

int main(){
    system("cls");
    B obj;          //clrscr();
    getch();
    return 0;
}

/*
Output :
I am A.
I am B.
B is Destored.
A is Destored.

*/