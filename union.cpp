#include<iostream>
using namespace std;
int main (){

    union {
        int x;
        char y;
    } u;
    u.x = 5;
    u.y = 'a';
    cout << u.x << " " << u.y << endl;
    return 0;
}