 #include<iostream>
 #include<math.h>
 #include<stdio.h>
 using namespace std;
 int main() {
 int num,count=0;
 cout<<"enter a number to check if it is prime: ";
 cin>>num;
 for(int i=2;i<=sqrt(num);i++)
 {
    if(num%i==0)
    {
        count++;
        break;
    }
 }
 cout<<endl;
 if(count==0)
 cout<<"num is prime";
 else
 cout<<"num is not-prime / composite ";
  return 0; }