#include <iostream>
using namespace std;

void multiplo(){
    float x, aux;

    cin >> x;
    aux = x;

    while(aux>=4){
        aux -= 4;
    }

    while(aux<=-4){
        aux += 4;
    }

    if(aux == 0){
        cout << x << " e multiplo de 4";
    } else {
        cout << x << " nao e mutiplo de 4";
    }
}

int main(){
    multiplo();

    return 0;
}