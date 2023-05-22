/*
Create a class Time that displays time in hour and minute form. Create  a method total Time() which takes two Time objects as an argument and returns a new object of Time displaying total of both Time objects.
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void displayTime() {
        cout << "Time: " << hours << " hours, " << minutes << " minutes." << endl;
    }

    Time totalTime(Time& t1,Time& t2) {
        Time total;
        total.minutes = t1.minutes + t2.minutes;
        total.hours = t1.hours + t2.hours + (total.minutes / 60);
        total.minutes = total.minutes % 60;
        return total;
    }
};

int main() {
    system("cls");      //clrscr();
    Time time1(2, 45);
    Time time2(1, 30);
    Time totalTime = totalTime.totalTime(time1, time2);
    totalTime.displayTime();
    getch();
    return 0;
}
 /*
 Output : 
 Time: 4 hours, 15 minutes.

 */