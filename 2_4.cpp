/*W.A.P to find sum and average of 10 numbers and sort element of 1D array in ascending order.*/
#include <iostream>
#include <conio.h>
#define SIZE 10
using namespace std;

int main(void) {
    int numbers[SIZE],sum=0,temp=0;
    float average = 0;  
    system("cls");
    cout << "Enter "<<SIZE<<" numbers: "<<endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
        sum += numbers[i]; 
    }

    average = static_cast<float>(sum) / SIZE;  // Calculate average

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    // Sort the array in ascending order using bubble sort
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the elements if they are in wrong order
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted Array (Ascending Order): "<<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] <<endl;
    }
   getch();
}

/*
Output :
Enter 10 numbers: 
6
7
9
20
15
12
13 
14
24
22
Sum: 142
Average: 14.2
Sorted Array (Ascending Order): 
6
7
9
12
13
14
15
20
22
24

*/