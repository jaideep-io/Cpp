#include <iostream>
#include <stdio.h>
using namespace std;
int factorial(int num);
int main()
{
    int num;
    cout << "enter num to cal factorial :" << endl;
    cin >> num;
    cout<<factorial(num);
    return 0;
}
int factorial(int num)
{
    int f = 1;
    for (int i = num; i >= 1; i--)
        f *= i;
        return f;
}