#include <iostream>
using namespace std;

#define N 5

int mediaVetor(int V[], int tam){
    int media=0;

    for(int i=0; i<tam; i++){
        media += V[i];
    }

    return (media/tam);
}

int mediaVetor1(int V[N]){
    int media=0;

    for(int i=0; i<N; i++){
        media += V[i];
    }

    return (media/N);
}

int mediaVetor2(int *V, int tam){
    int media=0;

    for(int i=0; i<tam; i++){
        media += V[i];
    }

    return (media/tam);
}

int main(){
    int vetor[] = {3, 6, 1, 3, 20};

    cout << mediaVetor(vetor, N) << endl;
    cout << mediaVetor1(vetor) << endl;
    cout << mediaVetor2(vetor, N) << endl;

    return 0;
}