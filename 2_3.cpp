/*W.A.P to print whether a number entered by user is a prime number or not.*/
#include<iostream>
#include<conio.h>
using namespace std;

    int main()
    {
        int rem=2,n;
        system("cls");
        cout<<"Checking Entered Number Prime Or Not..."<<endl;
        cout<<"Enter any integer : ";
        cin>>n;
        if(n==1 || n==0)
            {
                cout<<n<<" isn't Prime Number.";
                getch();
                exit(0);
            }
        for(rem=2;rem<=(n-1);rem++)
            {
                if(n%rem==0)
                    {
                        cout<<n<<" isn't Prime Number.";
                        break;
                    }
            }
        if(rem==n)
        cout<<n<<" is Prime Number.";

        getch();
    }
/*
Output 1 :
Checking Entered Number Prime Or Not...
Enter any integer : 7
7 is Prime Number.

*/
/*
Output 2 : 
Checking Entered Number Prime Or Not...
Enter any integer : 12
12 isn't Prime Number.

*/