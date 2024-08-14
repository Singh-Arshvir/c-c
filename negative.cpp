// C++ Program to check whether a number is positive or
// negative
#include <iostream>
using namespace std;

int main()
{
    int number;
    number = -100;
    if (number >= 0) {
        cout << number << " is a positive number." << endl;
    }
    else {
        cout << number << " is a negative number." << endl;
    }
    return 0;
}
