#include <iostream>
using namespace std;

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void bubble (int *v, int n){
    int i, j;
    for (i = n-1; i > 0; i--){
        for (j = 0; j < i; j++){
            if (v[j] > v[j+1]){
                troca (&v[j], &v[j+1]);
            }
        }
    }
}

void bubbleRecursive(int *v, int n) {
    if (n == 1){
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            troca(&v[i], &v[i + 1]);
        }
    }

    bubbleRecursive(v, n - 1);
}

int main(){
    int V[] = {7, 5, 5, 3, 9};

    bubble(V, 5);
    for(int i=0; i<5; i++){
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}