#include <iostream>
using namespace std;

void ordenar(int *a, int *b){
    if(*a > *b){
        int aux = *b;
        *b = *a;
        *a = aux;
    }
}

int main(){
    int x, y;

    cin >> x >> y;

    ordenar(&x, &y);

    cout << x << " " << y;
}