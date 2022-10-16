#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n;
cout<<"enter no of rows : ";
cin>>n;
cout<<endl;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=(2*n-i);j++)
    {
        if((i+j)>=n)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}
 return 0; }