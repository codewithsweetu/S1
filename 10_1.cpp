/*
Create a class called distance that has a separate integer member data for feet and inches.  One  constructor  should  initialize this  data  to  zero  and  another  should initialize  it  to  fixed  values.  A  member function should display  it in feet inches format.
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Distance {
private:
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }  // Default constructor

    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }  // Constructor with parameters

    void displayDistance() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    system("cls");       //clrscr();
    Distance d1;         // Create object using default constructor
    Distance d2(5, 8);   // Create object using constructor with parameters

    d1.displayDistance();
    d2.displayDistance();
    getch();

    return 0;
}

/*
Output :
Distance: 0 feet 0 inches
Distance: 5 feet 8 inches


*/