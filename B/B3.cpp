#include <iostream>
using namespace std;

int somaIntervalo(int x, int y){
    int soma = 0;

    if(y<x){
        int aux = x;
        x = y;
        y = aux;
    }

    for(x; x<=y; x++){
        soma += x;
    }

    return soma;
}

int main(){
    int x, y;

    cin >> x >> y;

    cout << somaIntervalo(x, y);

    return 0;
}