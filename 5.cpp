#include <iostream>
using namespace std;

float jurosCompostos(float, float, int);

int main(){
    float valor, taxa;
    int tempo;

    cout << "Insira o valor inicial: ";
    cin >> valor;

    cout << "Insira a taxa em % ao ano: ";
    cin >> taxa;

    cout << "Insira quantos anos ficara investido: ";
    cin >> tempo;

    cout << jurosCompostos(valor, taxa, tempo);

    return 0;
}

float jurosCompostos(float valor, float taxa, int tempo){
    taxa = (taxa/100) + 1;

    for(tempo; tempo>0; tempo--){
        valor = valor * taxa;
    }

    return valor;
}