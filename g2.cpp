#include <iostream>
using namespace std;

void juntarVetor(int *vetor1, int *vetor2, int *vetorfinal, int n1, int n2){
    for(int i=0; i<n1+n2; i++){
        if(i < n1){
            *(vetorfinal + i) = *(vetor1 + i);
        } else {
            *(vetorfinal + i) = *(vetor2 + i-n1);
        }
    }
}

int main(){
    int n1, n2;

    cin >> n1;
    int vetor1[n1];
    for(int i=0; i<n1; i++){
        cin >> vetor1[i];
    }

    cin >> n2;
    int vetor2[n2];
    for(int i=0; i<n2; i++){
        cin >> vetor2[i];
    }

    int nf = n1+n2;
    int vetorfinal[nf];
    juntarVetor(vetor1, vetor2, vetorfinal, n1, n2);

    cout << "Vetor final: "; 
    for(int i=0; i<nf; i++){
        cout << vetorfinal[i] << " ";
    }

    return 0;
}