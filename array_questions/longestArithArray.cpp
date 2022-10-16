#include<iostream>
#include<stdio.h>
using namespace std;
//analyse where you were wrong ?
int main() {
int key , temp_length=1,max_length=0,diff=0,d=0,n,pointer;
cout<<"enter the length of your array :";
cin>>n;
int a[n];
cout<<"\n enter the values for the array : ";
for(int i=0;i<n;i++)
cin>>a[n];

int i=0,j=0;
while(i<n)
{
key=i;
j=i;
d=a[i+1]-a[i];
diff=d;
while(diff==d && j<n)
{
    temp_length++;
    j++;
    diff=a[j+1]-a[j];
}
if(temp_length>max_length)
{
    max_length=temp_length;
    pointer=key;
}

i=i-1+temp_length;
temp_length=1;



}
cout<<"\n the longest arithmatic subarray starts from  "<<pointer<<" and has the length "<<max_length;
cout<<endl;
for(int i=pointer;i<=(max_length+pointer);i++)
cout<<" "<<a[i];


 return 0; }