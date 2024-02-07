#include <iostream>
using namespace std;

int buscaSeq(int x, int *V, int n) {
    for (int j = 0; j < n; j++)
        if (V[j] < x && V[j + 1] >= x)
            return j;
    return -1;
}

int main(){
    int n, x;
    cout << "Qual o tamanho do vetor?";
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cout << "Insira o elemento " << i+1 << ":";
        cin >> v[i];
    }
    cout << "Insira X: ";
    cin >> x;
    cout << "Indice encontrado: " << buscaSeq(x, v, n) << endl;
    return 0;
}