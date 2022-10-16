#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n;
cout<<"enter the length of your array :";
cin>>n;
int a[n];
cout<<"\n enter the values for the array : ";
for(int i=0;i<n;i++)
cin>>a[n];
int ans=2;
int pd=a[1]-a[0];
int j=2;
int curr=2;
while(j<n)
{
    
    if(pd==a[j]-a[j-1])
    {
        curr++;
    }
    else{

    pd=a[j]-a[j-1];
    curr=2;
    }
    ans=max(ans,curr);

}
cout<<endl<<ans;
 return 0; }