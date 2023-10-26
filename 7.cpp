#include <iostream>
using namespace std;

void inverter(int *V, int n){
    int inverso[n];

    for(int i=0; i<n; i++){
        inverso[(n-i)-1] = V[i];
    }

    for(int i=0; i<n; i++){
        V[i] = inverso[i]; 
    }
}

int main(){
    int n;

    cin >> n;

    int vetor[n];

    for(int i=0; i<n; i++){
        cin >> vetor[i];
    }

    inverter(vetor, n);

    for(int i=0; i<n; i++){
        cout << vetor[i] << " ";
    }
}