/*Write a C++ program to demonstrate use of constructor overloading.*/
#include <iostream>
#include <conio.h>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(int l) {
        length = l;
        width = l;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int getArea() {
        return length * width;
    }
};

int main() {
    system("cls");          //clrscr();
    Rectangle r1;           // Default constructor
    Rectangle r2(5);        // Constructor with one parameter
    Rectangle r3(4, 6);     // Constructor with two parameters

    cout << "Area of r1: " << r1.getArea() << endl;
    cout << "Area of r2: " << r2.getArea() << endl;
    cout << "Area of r3: " << r3.getArea() << endl;
    getch();

    return 0;
}

/*
Output : 
Area of r1: 0
Area of r2: 25
Area of r3: 24


*/