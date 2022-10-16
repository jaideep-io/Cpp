#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,t=0;
    cout << "enter the size of the array : ";
    cin >> n;
    cout<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        if(arr[j]>arr[k])
        {
               t=arr[j];
               arr[j]=arr[k];
               arr[k]=t;
        }
    }
    cout<<endl;
for (int i = 0; i < n; i++)
        cout<< arr[i]<<"\t";

    return 0;
}