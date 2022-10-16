#include <iostream>
#include <stdio.h>
using namespace std;
int count = 0;
int sorted(int arr[], int n)
{

    if (n == 0|| n==1 &&arr[0]<arr[1])
    {
        count = 1;
        return 1;
    }
    else if (arr[n] >= arr[n - 1])
        return sorted(arr, n - 1);
    else
        return 0;
}
int main()
{
    int n;
    cout << "enter size of the array :";
    cin >> n;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
cout<<endl;
if(sorted(arr,n-1))
cout<<"array is sorted ";
else 
cout<<"array is not sorted :";
    return 0;
}