#include <iostream>
using namespace std;

void ordenar(int[], int);

int main(){
    int tamanho;

    cout << "Insira o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];

    for(int i=0; i<tamanho; i++){
        cin >> vetor[i];
    }

    ordenar(vetor, tamanho);

    for(int i=0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}

void ordenar(int array[], int tamanho){
    for(int i=0; i<tamanho-1; i++){
        if(array[i] > array[i+1]){
            int aux = array[i+1];
            array[i+1] = array[i];
            array[i] = aux;
            
            i = -1;
        }
    }
}