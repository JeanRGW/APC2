#include <iostream>
using namespace std;

void somaIntervalo(){
    int x, y, soma = 0;

    cin >> x >> y;

    if(y<x){
        int aux = x;
        x = y;
        y = aux;
    }

    for(x; x<=y; x++){
        soma += x;
    }

    cout << soma;
}

int main(){
    somaIntervalo();

    return 0;
}