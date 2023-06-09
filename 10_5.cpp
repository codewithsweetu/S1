/*Write  a  C++  program  to  print  message when  object  gets  destroyed  using destructor.*/
#include<iostream> 
#include<conio.h>
using namespace std;
class test
{          
    public:
    int c=0; 
    test(){
    c++;
    cout <<"\n Object Created :-" << c << endl;
    }
    ~test() {
    cout<<"\n Object Destroyed :-"<< c << endl; 
    c--;
    }
};
    int main(){
        system("cls");     //clrscr();
        test t1;
        getch();

        return 0;
    }
/* 
Output : 
Object Created :-1
Object Destroyed :-1

*/