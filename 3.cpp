#include <iostream>
#include <string>
// Números acima de 9 quintilhões podem travar o programa
using namespace std;

void binario(unsigned long long int);

int main(){
    unsigned long long int x;

    cin >> x;

    binario(x);

    return 0;
}

void binario(unsigned long long int x){
    string binario;
    unsigned long long int aux=1;

    if(x == 0){
        cout << "0";
        return;
    }

    while(aux < x){
        aux *= 2;
    }

    if(aux > x){
        aux = aux/2;
    }

    while(aux > 1){
        if(x >= aux){
            x -= aux;
            binario += "1";
        } else {
            binario += "0";
        }

        aux = aux/2;
    }

    if(x == 1){
        binario += "1";
    } else {
        binario += "0";
    }

    cout << binario;
}