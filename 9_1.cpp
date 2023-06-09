/*
Create  a  class  'COMPLEX'  to  hold  a complex number. Write a friend function to add two complex numbers. Write a main function to add two COMPLEX objects.
*/
#include <iostream>
#include <conio.h>
using namespace std;
class COMPLEX {
private:
    float real;
    float imaginary;

public:
    void setComplex(float r, float i) {
        real = r;
        imaginary = i;
    }

    void displayComplex() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    friend COMPLEX addComplex(COMPLEX& c1,COMPLEX& c2);
};

COMPLEX addComplex(COMPLEX& c1,COMPLEX& c2) {
    COMPLEX result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    COMPLEX c1, c2, sum;
    system("cls");      // clrscr();
    c1.setComplex(2.5, 3.7);
    c2.setComplex(1.8, 4.2);

    sum = addComplex(c1, c2);

    cout << "First complex number: ";
    c1.displayComplex();

    cout << "Second complex number: ";
    c2.displayComplex();

    cout << "Sum of complex numbers: ";
    sum.displayComplex();
    getch();

    return 0;
}

/*
Output :
First complex number: 2.5 + 3.7i
Second complex number: 1.8 + 4.2i
Sum of complex numbers: 4.3 + 7.9i


*/