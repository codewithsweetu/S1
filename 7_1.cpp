/*
Write a C++ program using static member 
function to increment value of variable 3 
times.
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Counter {
private:
    static int count; // Static variable

public:
    static void increment() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0; // Initialize static variable

int main() {
    system("cls");  //clrscr();
    cout << "Initial count: " << Counter::getCount() << endl;

    Counter::increment(); 
    Counter::increment(); 
    Counter::increment(); 

    cout << "Final count: " << Counter::getCount() << endl;
	getch();
	
    return 0;
}

/*
Output :
Initial count: 0
Final count: 3

*/