#include<iostream>
using namespace std;
int main()
{ int n ,count=1 ;
cout<<"program to print floyed triangle"<<endl;
cout<<"enter the number of rows";
cin>>n;

for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++)
{
    cout<<count<<"\t";
    count++;
}
cout<<endl;
}


    return 0;
}