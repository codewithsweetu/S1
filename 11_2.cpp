/*Write a program for multilevel inheritance.*/
#include <iostream>
#include <conio.h>
using namespace std;
class A{
    public :
    void putA(){
        cout << "I am A." << endl ;
    }
};
class B:public A{
    public :
    void putB(){
        cout << "I am B." << endl ;
    }
};
class C:public B{
    public :
    void putC(){
        cout << "I am C." << endl ;
    }
};

int main(){
    C obj;
    system("cls");          //clrscr();
    obj.putA();
    obj.putB();
    obj.putC();
    getch();
    return 0;
}

/*
Output :
I am A.
I am B.
I am C.


*/