#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n;
    system("cls");
    cout<<"Enter No. Of Element : ";
    cin>>n;
    int arr1[n], arr2[n];
    cout<<"Now Fill Your Array NO.1 : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Array1["<<i<<"] : ";
        cin>>arr1[i];
    }
    cout<<"Now Fill Your Array NO.2 : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Array2["<<i<<"] : ";
        cin>>arr2[i];
    }
    cout<<"Addition Of Both Array is Given Below : "<<endl;
    for(i=0; i<n; i++)
    {
        arr2[i]=arr1[i]+arr2[i];
        cout<<"Array["<<i<<"] : "<<arr2[i]<<endl;
    }
    
    getch();
    return 0;
}
