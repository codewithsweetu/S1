/* Write a C++ program to copy the value of one  object  to  another  object  using copy constructor.*/
#include <iostream>
#include <conio.h>
using namespace std;

class Item {
private:
    int code;
    int price;

public:
    Item(int c, int p) {
        code = c;
        price = p;
    }

    Item(Item& i) {
        code = i.code;
        price = i.price;
    }

    void show() {
        cout << code << endl;
        cout << price << endl;
    }
};

int main() {
    system("cls");     //clrscr();
    Item i1(2, 20);
    Item i2 = i1;
    Item i3(i1);
    i2.show();   
    i3.show();   
    getch();


    return 0;
}

/*
Output :
2
20
2
20


*/