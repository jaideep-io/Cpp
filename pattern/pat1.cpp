#include<iostream>
using namespace std;
int main()
{ int n ;
cout<<"program to print inverted pyramid"<<endl;
cout<<"enter the number of rows";
cin>>n;
for (int i=n;i>=1;i--){
for(int j=i;j>=1;j--)
{
    cout<<"*";
}
cout<<endl;
}


    return 0;
}