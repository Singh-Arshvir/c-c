#include<iostream>
using namespace std;
int main ()
{
    class A
    {
    public:
        int x;
    };
    class B : public A
    {
    public:
        int y;
    };
    B b;
    b.x = 10;
    b.y = 20;
    cout << b.x << " " << b.y << endl;
    
}