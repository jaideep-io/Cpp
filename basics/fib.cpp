#include <iostream>
#include <stdio.h>
using namespace std;
void fib(int);
int main()
{
    int n;
    cout << "enter n for fib seq :" << endl;
    cin >> n;
    if(n>=0 && n<=2)
    cout<<"0 1 1 ";
    else
    fib(n);
    return 0;
    
}
void fib(int n)
{
    int t1=0,t2=1,t3;
    cout<<t1<<" "<<t2;
for(int i=2;i<=n-1;i++)
{
t3=t1+t2;
t1=t2;
t2=t3;
cout<<" "<<t3;
}

}