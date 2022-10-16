#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main() {
int num,temp=0,digit=0;
cout<<"enter the number to be checked for armstrong";
cin>>num;
int temp1=num;
while(num>0){
    digit=num%10;
    temp=temp+pow(digit,3);
    num=num/10;
}
cout<<endl;
if(temp==temp1)
cout<<temp<<" is armstrong number .";
else
cout<<temp<<" is not armstrong number.";
 return 0; }