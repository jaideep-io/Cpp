#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << endl;
    cout << "enter the values in array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {sum=0;
        for(int k=j;k<n;k++)
        {
           sum=sum+arr[k];
        cout<<" "<<sum;
        }
        cout<<endl;
    }
    return 0;
}