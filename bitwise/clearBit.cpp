#include<iostream>
#include<stdio.h>
using namespace std;
int clearBit(int n, int pos)
{
    return (n&(~(1<<pos)));
}
int main() {
cout<<clearBit(11,1);
 return 0; }