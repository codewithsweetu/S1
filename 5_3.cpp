/*
Write a program (using class and object) to convert distance in centimetre entered by user into inches, feet, meter and kilometre. 
*/
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class Convert{
    private :
    double centimeter;
    double inches;
    double meter;
    double killometer;

    public :
    void getdata(){
        cout << "Enter Centimeter : " ;
        cin >> centimeter ;

    }
    void calculate(){
        inches = (0.393701 * centimeter );
        meter = (0.01 * centimeter );
        killometer = (0.00001 * centimeter );

    }
    void putdata(){
        calculate();
        cout << "" << fixed << setprecision(8) ; 
        cout << setw(15) << "Centimeter : " << setw(12) << centimeter << endl;
        cout << setw(15) << "Inches : " << setw(12) << inches << endl;
        cout << setw(15) << "Meter : " << setw(12) << meter << endl;
        cout << setw(15) << "Killometer : " << setw(12) << killometer << endl;

    }

};

int main()
{
    Convert s1;
    system("cls");  // clrscr();
    s1.getdata();
    s1.putdata();
    getch();

    return 0;
}

/*
Output : 
Enter Centimeter : 70
  Centimeter :  70.00000000
      Inches :  27.55907000
       Meter :   0.70000000
  Killometer :   0.00070000


*/