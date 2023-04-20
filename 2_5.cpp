#include <iostream>
#include <conio.h>
using namespace std;

// Define a global variable
string global_var = "I am a global variable";

void print_variables() {
    // Define a local variable
    string local_var = "I am a local variable";
    
    // Print the values of the variables
    cout << "Global variable: " << global_var << endl;
    cout << "Local variable: " << local_var << endl;
}

int main() {
    system("cls"); //clrscr();
    // Call the function to print the variables
    print_variables();
    getch();
    return 0;
}
