#include <iostream>
using namespace std;

void dobrar(int *p){
    *p *= 2;
}

int main(){
    int a=2, *p = &a;

    dobrar(p);

    cout << a;

    return 0;
}