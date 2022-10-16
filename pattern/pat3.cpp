#include<iostream>
using namespace std;
int main()
{ int n ;
cout<<"program to print inverted pyramid with numbers"<<endl;
cout<<"enter the number of rows";
cin>>n;

for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++)
{
    cout<<i;
}
cout<<endl;
}


    return 0;
}