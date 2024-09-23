#include<iostream>
using namespace std;


class student{
    string name ;
    int id;

public:
 void set (int id , string name)
{
name=name;
id=id;
}

void  get()
{
    cout<<name<<endl;
    cout<<id<<endl;
}


};
int main()
{
    // simply telling about pointer 
    // int a = 10;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // pointer  to an object
student s1,*ptr;
s1.set(1,"arsh");
s1.get();
ptr=&s1;
ptr->get();
    return 0;

}