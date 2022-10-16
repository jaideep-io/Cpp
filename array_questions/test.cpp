#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n,temp=0,mx=0,key=0;
cout<<"enter the size of the array : ";
cin>>n;
int a[n];
cout<<"\n enter the values :";
for (int i=0;i<n;i++)
cin>>a[i];

for (int i=0;i<n;i++)
{
    int j=i;
    int d=a[i+1]-a[i];
    temp=0;
    while(a[j+1]-a[j]==d && j<n)
    {
        temp++;
        j++;
    }
    if(temp>mx)
    {
        mx=temp;
        key=i;
    }
    i=i+temp;
}

cout<<"\n size "<<mx+1<<" key is :"<<key;
 return 0; }