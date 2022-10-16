#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    bool check = 1;
    cout << "enter the size of ch array";

    cin >> n;
    char arr[n + 1];
    cout << "\n enter the values in ch array :";
    cin >> arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if(check=1)
    cout<<"\n its palindrome ";
    else
    cout<<"\n not a palindrome ";
    return 0;
}