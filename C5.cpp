#include <iostream>
using namespace std;

#define N 5

void maiorMenor(int V[], int tam, int *maior, int *menor){
    for(int i=0; i<tam; i++){
        if(V[i]>(*maior)){
            *maior = V[i];
        }
        if(V[i]<(*menor)){
            *menor = V[i];
        }
    }
}

void maiorMenor1(int V[N], int *maior, int *menor){
    for(int i=0; i<N; i++){
        if(V[i]>(*maior)){
            *maior = V[i];
        }
        if(V[i]<(*menor)){
            *menor = V[i];
        }
    }
}

void maiorMenor2(int *V, int tam, int *maior, int *menor){
    for(int i=0; i<tam; i++){
        if(V[i]>(*maior)){
            *maior = V[i];
        }
        if(V[i]<(*menor)){
            *menor = V[i];
        }
    }
}

int main(){
    int vetor[] = {3, -6, 1, 3, 20};
    int maior=INT_MIN, menor=INT_MAX;

    
    maiorMenor(vetor, N, &maior, &menor);
    cout << menor << " " << maior << endl;

    maiorMenor1(vetor, &maior, &menor);
    cout << menor << " " << maior << endl;

    maiorMenor2(vetor, N, &maior, &menor);
    cout << menor << " " << maior << endl;

    return 0;
}