#include <iostream>

using namespace std;

int buscaBinaria(int x, int *V, int n){
    int inicio = 0;
    int fim = n-1;

    while(inicio <= fim){ 
        int i = (inicio + fim) / 2;
        if (V[i-1] <= x && x <= V[i])
            return i;
        if (V[i] < x)
            inicio = i+1;
        else
            fim = i; 
    }
    
    return -1;
}

int main(){
    int n, x;
    cin >> n >> x;

    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << "Indice encontrado: " << buscaBinaria(x, v, n) << endl;

    return 0;
}