#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int n;
 cout<<"Enter n for the pattern "<<endl;
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n;j++)
    {
        if(j<=i || j>(2*n-i))
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
 }
 return 0; }
