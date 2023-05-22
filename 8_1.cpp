/*
Create a 'DISTANCE' class with : 
- feet and inches as data members 
- member function to input distance 
- member function to output distance 
- member  function  to  add  two distance objects
Write a main function to create objects of DISTANCE class. 
Input two distances and output the sum. 
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void inputDistance() {
        cout << "Enter the distance in feet: ";
        cin >> feet;
        cout << "Enter the distance in inches: ";
        cin >> inches;
    }

    void outputDistance() {
        cout << "The distance is " << feet << " feet and " << inches << " inches." << endl;
    }

    void addDistances(Distance& distance1,Distance& distance2) {
        feet = distance1.feet + distance2.feet;
        inches = distance1.inches + distance2.inches;

        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
};

int main() {
    Distance distance1, distance2;
    system("cls");     //clrscr();
    cout << "Enter the first distance:" << endl;
    distance1.inputDistance();

    cout << "Enter the second distance:" << endl;
    distance2.inputDistance();

    Distance sumDistance;
    sumDistance.addDistances(distance1, distance2);

    cout << "Sum of distances:" << endl;
    sumDistance.outputDistance();
    getch();
    return 0;
}

/* 
Output : 
Enter the first distance:
Enter the distance in feet: 2
Enter the distance in inches: 3
Enter the second distance:
Enter the distance in feet: 3
Enter the distance in inches: 2
Sum of distances:
The distance is 5 feet and 5 inches.


*/