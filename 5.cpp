#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int serie;
    float nota;
};

void lerNotas(Aluno *v, int n){
    for(int i=0; i<n; i++){

        cout << "Insira o nome do aluno " << i+1 << ": ";
        cin >> v[i].nome;

        cout << "Insira a serie do aluno " << i+1 << ": ";
        cin >> v[i].serie;

        cout << "Insira a nota do aluno " << i+1 << ": ";
        cin >> v[i].nota;
    }
}

float mediaNotas(Aluno *v, int n){
    float media = 0;
    for(int i=0; i<n; i++){
        media += v[i].nota;
    }
    return (media/n);
}

int main(){
    int n;
    Aluno *v;
    cout << "Insira o numero de alunos: ";
    cin >> n;

    if(!(v = new(nothrow) Aluno[n])){
        cout << "Erro ao alocar memoria!";
        return 1;
    }

    lerNotas(v, n);
    cout << mediaNotas(v, n);

    delete v;
    return 0;
}