 #include<iostream>
 
 #include<string.h>
 #include<stdio.h>
 using namespace std;
 int main() {
  string s1="jaideEp";
   for(int i=0;i<s1.length();i++)
   {
    if(s1[i]>=97&& s1[i]<=122)
    s1[i]=s1[i]-32;
   }
   cout<<"\n"<<s1;
  return 0; }