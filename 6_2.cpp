/*
Write a C++ program using array of objects 
to compare SPI of 10 different students and 
print whose SPI is highest.
*/

#include <iostream>
#include <conio.h>

using namespace std;

const int maxSize = 20;

class Student {
public :
    char name[maxSize];
    float spi;
    void getdata(int n) {
        cin.ignore(); // Ignore the newline character from previous input
        cout << "Enter the name of student " << n + 1 << ": ";
        cin.getline(name, maxSize);
        cout << "Enter the SPI for student " << n + 1 << ": ";
        cin >> spi;
    }

    float getMaxSPI(Student* students, int n) {
        float maxSPI = students[0].spi;

        for (int i = 1; i < n; i++) {
            if (students[i].spi > maxSPI) {
                maxSPI = students[i].spi;
            }
        }

        return maxSPI;
    }
};

int main() {
    int numStudents;
    system("cls");    //clrscr();
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student* students = new Student[numStudents];
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getdata(i);
    }
    Student student;
    float maxSPI = student.getMaxSPI(students, numStudents);

    cout << "\nStudent with the highest SPI:\n";
    for (int i = 0; i < numStudents; i++) {
        if (students[i].spi == maxSPI) {
            cout << "Name: " << students[i].name << endl;
            cout << "SPI: " << students[i].spi << endl;
            break;
        }
    }

    delete[] students;

    getch();
    
    return 0;
}

/*
Output : 
Enter the number of students: 10

Enter details for student 1:
Enter the name of student 1: A
Enter the SPI for student 1: 1

Enter details for student 2:
Enter the name of student 2: B
Enter the SPI for student 2: 2

Enter details for student 3:
Enter the name of student 3: C
Enter the SPI for student 3: 3

Enter details for student 4:
Enter the name of student 4: D
Enter the SPI for student 4: 4

Enter details for student 5:
Enter the name of student 5: E
Enter the SPI for student 5: 5

Enter details for student 6:
Enter the name of student 6: F
Enter the SPI for student 6: 6

Enter details for student 7:
Enter the name of student 7: G
Enter the SPI for student 7: 7

Enter details for student 8:
Enter the name of student 8: H
Enter the SPI for student 8: 8

Enter details for student 9:
Enter the name of student 9: I
Enter the SPI for student 9: 9

Enter details for student 10:
Enter the name of student 10: J
Enter the SPI for student 10: 0

Student with the highest SPI:
Name: I
SPI: 9


*/
