#include <iostream>
using namespace std;

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void selection (int *v, int n){
    int i, j, menor;

    for (i = 0; i < n-1; i++){
        menor = i;
        for (j = i+1; j < n; j++){
            if (v[j] < v[menor]){
                menor = j;
            }
        }
        if (v[menor] != v[i]){
            troca (&v[menor], &v[i]);
        }
    }
}

void selectionInverso(int *v, int n){
    int i, j, maior; // Variavel "maior"

    for (i = 0; i < n-1; i++){
        maior = i;
        for (j = i+1; j < n; j++){
            if (v[j] > v[maior]){ // Troca da condição < para >
                maior = j;
            }
        }
        if (v[maior] != v[i]){
            troca (&v[maior], &v[i]);
        }
    }
}

int main(){
    int V[] = {3, 1, 7};

    selection(V, 3);
    for(int i=0; i<3; i++){
        cout << V[i] << " ";
    }
    cout << endl;


    selectionInverso(V, 3);
    for(int i=0; i<3; i++){
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}