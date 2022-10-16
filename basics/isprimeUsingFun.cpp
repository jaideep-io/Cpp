#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int isprime(int n);
int main()
{
    int a, b;
    cout << "enter two number to find prime numbers in between them :";
    cin >> a >> b;
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (isprime(i))
            cout << i << " ";
    }
    
    return 0;
}
int isprime(int n) //we could have given it boolean type return values
    {
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        return 1;
        else 
        return 0;
    }