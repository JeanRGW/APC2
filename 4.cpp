#include <iostream>

using namespace std;

int buscaBin(int x, int *v, int n){
    int inicio = 0;
    int fim = n-1;

    while(inicio <= fim){ 
        int i = (inicio + fim) / 2;
        if (v[i-1] < x && x <= v[i])
            return i;
        if (v[i] < x)
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

    cout << "Indice encontrado: " << buscaBin(x, v, n) << endl;
    
    return 0;
}