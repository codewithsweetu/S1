/*Write a program to print following pattern using for loop.*/
 /*   1 
     2 3 
    4 5 6 
   7 8 9 10 
 11 12 13 14 15 */
#include<iostream>
#include<conio.h>
#define N 5
using namespace std;
int main(void)
{
    int i,j,k=1,space=N-1;
    system("cls");
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=space;j++)
        cout<<" ";

        space--;
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    getch();
}

/*
Output : 
    1 
   2 3 
  4 5 6 
 7 8 9 10 
11 12 13 14 15

*/