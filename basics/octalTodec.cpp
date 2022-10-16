#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
int n,dec=0,count=0,digit=0;
cout<<"enter the octal number : "<<endl;
cin>>n;
while(n)
{
    digit=n%10;
    dec=dec+digit*pow(8,count);
    n=n/10;
    count++;
}
cout<<endl;
cout<<"the dec is "<<dec;
 return 0; }