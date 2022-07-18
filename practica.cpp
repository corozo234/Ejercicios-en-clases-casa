#include<iostream>
#include<conio.h>

using namespace std;


double Factorial(int num)
{
    double fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}
int Potencia (int base, int exp)
{
    int res = 1;
    for (int j = 1; j <= exp; j++)
    {
        res *= base;
    }
    return res;
}
double Serie(int num)
{
    double s=0;
    for (int k = 2; k <= num; k++)
    {
        s += (Factorial (k) / Potencia (5, k-1));
    }
    return s;
}

int main()
{
    Serie(4);
    cout<<endl<<"El factorial de 5 es "<<Factorial(5);

    getch();
    return 0;
}
