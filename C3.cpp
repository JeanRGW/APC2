#include <iostream>
using namespace std;

#define N 5

int positivos(int V[], int tam){
    int positivos=0;

    for(int i=0; i<tam; i++){
        if(V[i]>=0){
            positivos += 1;
        }
    }

    return positivos;
}

int positivos1(int V[N]){
    int positivos=0;

    for(int i=0; i<N; i++){
        if(V[i]>=0){
            positivos += 1;
        }
    }

    return positivos;
}

int positivos2(int *V, int tam){
    int positivos=0;

    for(int i=0; i<tam; i++){
        if(V[i]>=0){
            positivos += 1;
        }
    }

    return positivos;
}

int main(){
    int vetor[] = {3, -6, 1, 3, 20};

    cout << positivos(vetor, N) << endl;
    cout << positivos1(vetor) << endl;
    cout << positivos2(vetor, N) << endl;

    return 0;
}