/*
Write a C++ program to enter number and cost of a class item using get data () and using put data () to display data. Write get data () outside the class item.
*/

#include <iostream>
#include <conio.h>
using namespace std;

class Item {
    int number;
    float cost;

public:
    void get_data();   
    void put_data();    
};

void Item::get_data() {
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the cost: ";
    cin >> cost;
}

void Item::put_data() {
    cout << "Number: " << number << endl;
    cout << "Cost: " << cost << endl;
}

int main() {
    Item item;   
    system("cls");   // clrscr();

    item.get_data();
    cout << "\nDisplaying entered data:\n";
    item.put_data();  
    getch();

    return 0;
}


/*
Output : 
Enter the number: 200
Enter the cost: 20

Displaying entered data:
Number: 200
Cost: 20


*/