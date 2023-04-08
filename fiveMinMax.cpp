#include<iostream>
#include<conio.h>
#define X 5
using namespace std;
int main()
{
    system("cls");
    int i,arr[X],max=0,min;
    cout<<"Enter Five Numbers To Find Minimum And MAximum From Them :"<<endl;
    for(i=0;i<X;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    min=arr[0];
    for(i=0;i<X;i++)
    {
        if(arr[i]<min)
        {
           min=arr[i];

        }

    }
    

    cout<<"MAx : "<<max<<endl;
    cout<<"Min : "<<min;

    getch();
    return 0;
}