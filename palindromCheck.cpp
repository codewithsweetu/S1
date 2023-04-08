#include<iostream>
#include<conio.h>
using namespace std;

    int main()
    {   
        int n,temp,reverse=0;
        system("cls");
        cout<<"Cheak Entered  Number Is Palindrom Or Not..."<<endl;
        cout<<"Enter any integer : ";
        cin>>n;
        temp=n;
        while(temp!=0) //also use for reverse number 
            {
                reverse=reverse*10;
                reverse=reverse+(temp%10);
                temp=temp/10;
            }
        if(n==reverse)
            {
                cout<<n<<" is Palindrom-Number.";
            }
        else
            {
                cout<<n<<" isn't Palindrom-Number.";
            }
    getch();
    return 0;
    }    