#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter the size ";
    cin >> n;

    char a[n + 1];
    for (int i = 0; i <= n; i++)
    {

    // cout<<"hlw bro";
        cin >> a[i];
    }
    int i=0;
while(a[i]=!'\0')
    cout << a;
    return 0;
}