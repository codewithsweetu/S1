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
            {
                cout<<n<<" is Prime Number.";
            }
        getch();
        return 0;
    }