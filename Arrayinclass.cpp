#include<iostream>
using namespace std;

int main ()
{
    class array
    {
        int a[5];
    public:
        void getdata()
        {
            cout<<"Enter the element of array";
            for(int i=0;i<5;i++)
            cin>>a[i];
        }
        void display()
        {
            cout<<"Element of array are";
            for(int i=0;i<5;i++)
            cout<<a[i]<<"\n";
        }
    };
    array a1;
    a1.getdata();
    a1.display();
    
return 0; 

}