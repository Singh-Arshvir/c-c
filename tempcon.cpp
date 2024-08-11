
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter 1 for Celsius to Fahrenheit"<<endl;
    cout<<"Enter 2 for Fahrenheit to Celsius"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            float c,f;
            cout<<"Enter the temperature in Celsius: ";
            cin>>c;
            f = (c*1.8)+32;
            cout<<c<<" Celsius is equal to "<<f<<" Fahrenheit"<<endl;
            break;
        }
        case 2:
        {
            float f,c;
            cout<<"Enter the temperature in Fahrenheit: ";
            cin>>f;
            c = (f-32)/1.8;
            cout<<f<<" Fahrenheit is equal to "<<c<<" Celsius"<<endl;
            break;
        }
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}
