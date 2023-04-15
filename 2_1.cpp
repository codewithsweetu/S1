/*W.P.A to perform all arithmetic operation on two integers scan from user.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(void)
{
    int a,b;
    system("cls");  //clrscr();
    cout<<"Enter Any Two Integers To Perform Arithmetic Opreaters : "<<endl;
    cin>>a>>b;
    cout<<"Addition :"<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<"Substruction :"<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<"Multiplication :"<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<"Division :"<<a<<" / "<<b<<" = "<<a/b<<endl;
    cout<<"Modulo :"<<a<<" % "<<b<<" = "<<a%b<<endl;
    getch();
}

/*
Output :
Enter Any Two Integers To Perform Arithmetic Opreaters : 
30
15
Addition :30 + 15 = 45
Substrction :30 - 15 = 15
Multiplication :30 * 15 = 450
Division :30 / 15 = 2
Modulo :30 % 15 = 0

*/