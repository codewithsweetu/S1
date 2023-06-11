/*Write    a    program    for    simple/single inheritance.*/
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

int main(){
    B obj;
    system("cls");          //clrscr();
    obj.putA();
    obj.putB();
    getch();
    return 0;
}

/*
Output :
I am A.
I am B.


*/