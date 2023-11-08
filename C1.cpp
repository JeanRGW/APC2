#include <iostream>
using namespace std;

#define N 5

int maiorInteiro(int V[], int tam){
    int maior = INT_MIN;

    for(int i=0; i<tam; i++){
        if(V[i] > maior){
            maior = V[i];
        }
    }

    return maior;
}

int maiorInteiro1(int V[N]){
    int maior = INT_MIN;

    for(int i=0; i<N; i++){
        if(V[i] > maior){
            maior = V[i];
        }
    }

    return maior;
}

int maiorInteiro2(int *V, int tam){
    int maior = INT_MIN;

    for(int i=0; i<tam; i++){
        if(V[i] > maior){
            maior = V[i];
        }
    }

    return maior;
}

int main(){
    int vetor[] = {3, 6, 1, 3, 20};

    cout << maiorInteiro(vetor, N) << endl;
    cout << maiorInteiro1(vetor) << endl;
    cout << maiorInteiro2(vetor, N) << endl;

    return 0;
}