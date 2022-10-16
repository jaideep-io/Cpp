#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i!=0 && i & (i - 1) == 0)
        {
           
            cout << i << " its power of 2 ";
        }
        else
        {

        cout<<"chutiya hai tu";
        }
    }
    return 0;
}