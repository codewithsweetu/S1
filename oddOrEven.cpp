#include<iostream>
#include<conio.h>
using namespace std;

    int main()
    {
        int n;
        system("cls");
        cout<<"Checking Entered Number Odd Or Even..."<<endl;
        cout<<"Enter any integer : ";
        cin>>n;
        if(n%2==0)
            {
                cout<<n<<" is Even-Number.";
            }
        else
            {
                cout<<n<<" is Odd-Number.";
            }
        getch();
        return 0;
    }