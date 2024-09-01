#include<iostream>
using namespace std;
int main ()

{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    if(n%2!=0)
    {
        cout<<"Table of "<<n<<" is :"<<endl;
        for(int i=1;i<=10;i++)
        {
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        }
    }
    else
    {
        cout<<"Number is even"<<endl;
    }
    
    return 0;
}