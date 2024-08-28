#include <bits/stdc++.h>
using namespace std;
struct book
{
    int price;
    string name;
};

struct student
{
    int rollno;
    string name;
    book b;
};

int main()
{
    student s;
    s.rollno = 1;
    s.name = "arsh";
    s.b.price = 100;
    s.b.name = "c++";

    cout << s.rollno << " " << s.name << " " << s.b.price << " " << s.b.name << endl;
    return 0;
}