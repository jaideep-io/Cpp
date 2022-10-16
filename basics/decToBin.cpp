#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int num, count = 1;
    cout << "enter the decimal number to be conv to binary";
    cin >> num;
    cout << endl;
    while ((num >= pow(2, count)))
    {
        count++;
    }
    for (int i = count-1 ; i >= 0; i--)
    {
        if(num==0&&i==0)
        {
            cout<<"0";
            break;
        }
        if (num >= pow(2, i))
        {
            cout << "1";
            num=num-pow(2, i);
        }
        else
            cout << "0";
    }
    cout<<endl<<count;

    return 0;
}