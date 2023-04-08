#include<iostream>
#include<conio.h>
using namespace std;

    int main()
    {   
        int i=1,n;
        long double fact=1;
        system("cls");
        cout<<"Find Factorial Of N-Numbers..."<<endl;
        cout<<"Enter any integer : ";
        cin>>n;
        while(i=n)
            {
                fact=fact*i;
                i++;
            }
        cout<<"Factorial of "<<n<<" is "<<fact;
        getch();
        return 0;
    }
