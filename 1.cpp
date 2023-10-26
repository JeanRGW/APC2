#include <iostream>
using namespace std;

int main(){
    int a = 1050, b = 3010;
    int *p1 = &a, *p2 = &b;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout << a << endl << b;

    return 0;
}