/*
Write a C++ program to show the use of 
static data member and static member 
function.
*/

#include <iostream>
#include <conio.h>
using namespace std;

class MyClass {
private:
    static int count; // static data member

public:
    MyClass() {
        count++;
    }

    static int getCount() { // static member function
        return count;
    }
};

int MyClass::count = 0; // initializing static data member

int main() {
    system("cls");     //clrscr();
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout << "Count: " << MyClass::getCount() << endl;
	getch();
    return 0;
}

/*
Output : 
Count: 3


*/