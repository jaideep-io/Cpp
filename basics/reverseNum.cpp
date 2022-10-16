#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int num,temp=0,digit=0;
cout<<"enter the num to be reversed : ";
cin>>num;
while(num>0)
{
    digit=num%10;
    temp=temp*10+digit;
    num/=10;
}
num=temp;
cout<<endl<<"reverse number is :";
cout<<num;
 return 0;
  }