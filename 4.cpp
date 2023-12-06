#include <iostream>
using namespace std;

void lerNotas(float *v, int n){
    for(int i=0; i<n; i++){
        cout << "Insira a nota do aluno " << i+1 << ": ";
        cin >> *(v+i);
    }
}

float mediaNotas(float *v, int n){
    float media = 0;
    for(int i=0; i<n; i++){
        media += *(v+i);
    }
    return (media/n);
}

int main(){
    int n;
    float *v;
    cout << "Insira o numero de alunos: ";
    cin >> n;

    if(!(v = new(nothrow) float[n])){
        cout << "Erro ao alocar memoria!";
        return 1;
    }

    lerNotas(v, n);
    cout << mediaNotas(v, n);

    delete v;
    return 0;
}