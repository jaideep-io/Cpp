#include <iostream>
#include <stdio.h>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int i = 0;
    int curr = 0, maxlen = 0,pin=0,st=0   ,maxst=0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            
            if(curr>maxlen)
            {
           
            maxlen=curr;
            maxst=st;
            // pin=abs(maxlen-i-1);
            }
            curr=0;
            st=i+1;
        }
        else
        curr++;
        if (arr[i] == '\0')
        {
            break;
        }
i++;
    }
    for(int i=pin;i<(pin+maxlen);i++)
    cout<<arr[i];
    return 0;
}