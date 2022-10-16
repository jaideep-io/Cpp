#include <iostream>
#include <stdio.h>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
int n;
cout<<"enter the n ";
cin>>n;
cout<<"\nfactorial of number "<<n<<" is "<<fact(n);
    return 0;
}