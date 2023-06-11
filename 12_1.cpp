/*Write a C++ Program that shows use of this pointer.*/
#include <iostream>
#include <conio.h>
using namespace std;
class A{
    private: 
    int x;  
    public: 
    void show(){
        cout << "My object's address= "<< this << endl ;
    }
};
int main(){
    system("cls");          //clrscr();
    A b1,b2;  
    b1.show();
    b2.show();
    getch();
    return 0;

}

/*
Output :
My object's address= 0x61ff1c
My object's address= 0x61ff18


*/