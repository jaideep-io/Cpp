#include<iostream>
#include<stdio.h>
using namespace std;
void dec(int n)
{
    if(n==1){
        cout<<"1 ";
        return;
    }
    
    
    
        cout<<" "<<n;
          dec(n-1);
    
}
void inc(int n)
{ 
      if(n==1)
    {
        cout<<"1 ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
  
    
}
int main() {
int n;
cout<<"enter the num :";
cin>>n;
 dec(n);
 cout<<endl;
 inc(n);
 return 0; }