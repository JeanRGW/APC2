#include <iostream>

using namespace std;

int buscaSequencialRec(int x, int *v, int n) {
    if (v[n] == x){
        return n;
    }
    
    int j = buscaSequencialRec(x, v, n - 1);
    if (v[j] == x){
        return j; 
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

    cout << "Indice encontrado: " << buscaSequencialRec(x, v, n) << endl;

    return 0;
}