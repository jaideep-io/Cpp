#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n,curr;
cout<<"enter the size of the array :";
cin>>n;
cout<<endl;
int arr[n];
cout<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++)
{
    curr=arr[i];
    int j=i-1;
 while(arr[j]>curr && j>=0)
 {
arr[j+1]=arr[j];
j--;
 }
 arr[j+1]=curr;

}
cout<<endl;
for(int i=0;i<n;i++)
cout<<"\t"<<arr[i];
 return 0; 
 }