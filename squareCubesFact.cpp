#include <iostream>
#define N 10
using namespace std;

int fact(int);

int main()
{
    int i;
    system("cls");
    cout << "\t Number square cube factorial " << endl;
    for (i = 1; i <= N; i++)
    {
        cout << "\t  " << i << "\t  " << i * i << "\t" << i * i * i << "\t" << fact(i) << endl;
    }
    return 0;
}

int fact(int i)
{
    int fact = 1, n = 1;
    while (n <= i)
    {
        fact = fact * n;
        n++;
    }
    return fact;
}
