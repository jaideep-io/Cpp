#include<iostream>
#include<stdio.h>
using namespace std;
int setBit(int n, int pos)
{
    return (n|(1<<pos));
}
int main() {
cout<<"after set-ing the 3rd bit of 8 it becomes "<<setBit(8,2);
 return 0; }