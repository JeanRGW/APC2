#include <iostream>
#include <ctime>
using namespace std;

#define N 5

void inserirValores(int V[], int tam){
    for(int i=0; i<tam; i++){
        V[i] = (rand()%100);
    }
}

void inserirValores1(int V[N]){
    for(int i=0; i<N; i++){
        V[i] = (rand()%100);
    }
}

void inserirValores2(int *V, int tam){
    for(int i=0; i<tam; i++){
        V[i] = (rand()%100);
    }
}

int main(){
    srand(time(NULL));
    int vetor[N];

    inserirValores(vetor, N);
    for(int i=0; i<N; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;


    inserirValores1(vetor);
    for(int i=0; i<N; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;


    inserirValores2(vetor, N);
    for(int i=0; i<N; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;


    return 0;
}