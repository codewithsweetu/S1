/*Define a class vehicle. Inherit vehicle into two-wheelers  and  four-wheelers.  
Inherit two-wheelers  into  bicycle  and  scooters. Inherit four-wheelers into diesel vehicles and petrol  vehicles.  
Provide  a  virtual function that calculates the mileage of the vehicles.*/
#include <iostream>
#include <conio.h>
using namespace std;

class Vehicle{
    public:
        float kilometer; 
        float petrol;
        virtual float mileage(){
            cout << "Kilometer : ";
            cin >> kilometer;
            cout << "Petrol used(in Leter) : ";
            cin >> petrol;
            return kilometer/petrol;
        }
};

class twoWheeler:public Vehicle{
    public:
    float kilometer;
    float petrol;
    float mileage(){
        cout << "Kilometer : ";
        cin >> kilometer;
        cout << "Petrol used(in Leter) : ";
        cin >> petrol;
        return kilometer/petrol;
        }
};

class fourWheeler:public Vehicle{
    public:
    float kilometer;
    float petrol;
    float mileage(){
        cout << "Kilometer : ";
        cin >> kilometer;
        cout << "Petrol used(in Leter) : ";
        cin >> petrol;
        return kilometer/petrol;
        }
};


class scooter:public twoWheeler{
    public:
    float kilometer;
    float petrol;
    float mileage(){
        cout << "Kilometer : ";
        cin >> kilometer;
        cout << "Petrol used(in Leter) : ";
        cin >> petrol;
        return kilometer/petrol;
        }
};


class bicycle:public twoWheeler{
    public:
    float kilometer;
    float battery;
    float mileage(){
        cout << "Kilometer : ";
        cin >> kilometer;
        cout << "Petrol used(in Leter) : ";
        cin >> petrol;
        return kilometer/petrol;
        }
};


class diesel:public fourWheeler{
    public:
    float kilometer;
    float diesel;
    float mileage(){
        cout << "Kilometer : ";
        cin >> kilometer;
        cout << "Diesel used(in Leter) : ";
        cin >> diesel;
        return kilometer/diesel;
        }
};


class petrol:public fourWheeler{
    public:
    float kilometer;
    float petrol;
    float mileage(){
        cout << "Kilometer : ";
        cin >> kilometer;
        cout << "Petrol used(in Leter) : ";
        cin >> petrol;
        return kilometer/petrol;
        }
};

int main() {
    Vehicle *v;
    while(1){
        system("cls");      //clrscr();    
        cout << "Enter number from below to calculate mileage of the following : \n";
        cout << "1. Bicycle \n2. Scooter\n3. Petrol Car\n4. Diesel Car\n0. Exit\n";
        cout << "Enter Your Choice :";
        int ch;
        ok :
        cin >> ch;
        if(ch > 4 || ch < 0){
            cout << "Enter Valid Choice...." << endl ;
            goto ok;
        }
        switch(ch){
            case 1:
                v=new bicycle;
                break;
            case 2:
                v = new scooter;
                break;
            case 3 : 
                v = new petrol;
                break;
            case 4: 
                v= new diesel;
                break;
            case 0:
                system("cls");      //clrscr();
                cout << "Thnx uhh! For visiting !!!";
                getch();
                exit(0);
                break;
    
        }
    float milleage = v->mileage();
    cout << "Your Vehicle milleage is : "<<milleage;
    getch();
    }
    return 0;
}

/*
Outputs : 
Enter number from below to calculate mileage of the following :
1. Bicycle
2. Scooter
3. Petrol Car
4. Diesel Car
0. Exit
Enter Your Choice :2
Kilometer : 100
Petrol used(in Leter) : 7 
Your Vehicle milleage is : 14.2857

//After Pressing 0
Thnx uhh! For visiting !!!

*/