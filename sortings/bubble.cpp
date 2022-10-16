#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n,t=0;
cout<<"enter the size of the array : ";
cin>>n;
cout<<endl;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int j=0;j<n-1;j++)
{
    for(int k=0;k<n-1-j;k++)
    {
        if(a[k+1]<a[k])
        {
            t=a[k+1];
            a[k+1]=a[k];
            a[k]=t;
        }
    }
}
cout<<endl;
for(int i=0;i<n;i++)
{
    cout<<a[i]<<"\t";
}
 return 0; }