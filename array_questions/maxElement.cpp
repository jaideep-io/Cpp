#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n,mx=-2147483648;
cout<<"enter the size of the array :";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int j=0;j<n;j++)
{
    if(mx<arr[j]) // can use mx=max(mx,a[j])
    {
    mx=arr[j];
    }
    cout<<"max till index "<<j<<" is "<<mx;
    cout<<endl;
}

 return 0; }