#include<iostream>
using namespace std;
int main()
{
 cout<<"enter a number";
 int a ;
 cin>>a;
 int reverse=0;
 int remainder;
while(a!=0)
{
// not equal to will be !=
remainder=a%10;
reverse= reverse*10+remainder;
a/=10;
}
cout<<"reverse number is equal to"<<reverse;
 return 0; 
}