#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int n,count=0;
cin>>n;
cout<<endl;
 while(n&(n-1))
 {
    count++;
    n--;
 }
 cout<<count;
 
 return 0; }