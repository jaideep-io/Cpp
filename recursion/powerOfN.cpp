#include<iostream>
#include<stdio.h>
using namespace std;
int power(int n, int p)
{
    if(p==0)
    return 1;
    else 
    return n*power(n,p-1);
}
int main() {
int n,p;
cout<<"enter n and power p ";
cin>>n>>p;
cout<<"\n n^p= "<<power(n,p);
 return 0; }