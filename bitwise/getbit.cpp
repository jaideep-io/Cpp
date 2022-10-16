#include<iostream>
#include<stdio.h>
using namespace std;
int getBit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}
int main() {

   cout<< getBit(5,2);//5 ka binary ke sath and karega

 return 0; }