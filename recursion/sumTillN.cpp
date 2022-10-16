#include <iostream>
#include <stdio.h>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "enter n to cal sum till : ";
    cin>>n;
    cout << "\n"
         << sum(n);
    return 0;
}