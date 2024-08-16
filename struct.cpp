#include<iostream>
using namespace std;

    struct employee
{
    int id;
    float salary;
};
int main()
{

    struct employee arsh;
    arsh.id = 1;
    arsh.salary = 12000;
    cout<<arsh.id<<" "<<arsh.salary;
   
   
   
    return 0;
}