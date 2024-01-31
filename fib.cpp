#include <iostream>
using namespace std;

int fibContador = 0;

int fib(int n){
    fibContador++;
    if (n == 1 || n == 2){
        return n - 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    fib(8);

    cout << fibContador;

    return 0;
}