#include <iostream>
#include <stdio.h>
using namespace std;
int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
int n;
cout<<"enter the num :";
cin>>n;
cout<<endl;
for(int i=1;i<=n;i++)
cout<<" "<<fib(i);
    return 0;
}