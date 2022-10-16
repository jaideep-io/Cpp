#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int x, y, z, a, b, c;
    cout << "enter three num to check py triplet :";
    cin >> x >> y >> z;
    cout << endl;
    a = max(x, max(y, z));
    b = (a == x) ? y : x;
    c = (b == y) ? z : min(y, z);
    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        cout << "yes they form py triplet ";
    else
        cout << "no ,They do not form py triplet ";
    cout << endl;
    cout << a << b << c;
    cout << endl;
    cout << x << y << z;
    return 0;

}
/* alternate program 
a=max(x),max(y,z);
if(a==x)-->b==y and c==z
else if(a==y)--> b==x and c==z
else b==x and c==z
*/