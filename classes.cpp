#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    public:
    int rollno;
    char name[20];
    int marks;
};

int main()
{
    Student s1;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter roll no: ";
    cin>>s1.rollno;
    cout<<"Enter marks: ";
    cin>>s1.marks;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll no: "<<s1.rollno<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}