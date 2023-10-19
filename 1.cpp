#include <iostream>
using namespace std;

int somaMenorIgual(int);

int main(){
    int x;

    cin >> x;

    cout << somaMenorIgual(x);

    return 0;
}

int somaMenorIgual(int x){
    int soma=0;

    for(x; x>0; x--){
        soma += x;
    }

    return soma;
}

