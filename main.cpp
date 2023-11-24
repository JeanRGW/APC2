#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

struct Curso {
    string nome;
    int duracao;
    Aluno aluno;
};

void printAluno(Aluno aluno){
    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;
    cout << endl;
}

void reescreverAluno(Aluno *aluno){
    cout << "Insira o nome do aluno: ";
    getline(cin, aluno->nome);
    cout << "Insira a idade: ";
    cin >> aluno->idade;
    cout << "Insira a nota: ";
    cin >> aluno->nota;
}

int main(){
    Aluno aluno;
    aluno.nome = "Arthur Morgan";
    aluno.idade = 36;
    aluno.nota = 10;

    printAluno(aluno);



    Aluno alunos[3];
    alunos[0] = {"John Marston", 26, 9.5};
    alunos[1] = {"Micah Bell", 39, 0};
    alunos[2] = {"Hosea Matthews", 55, 7.2};

    for(int i=0; i<3; i++){
        cout << "------------------------------" << endl;
        printAluno(alunos[i]);
    }



    reescreverAluno(&aluno);
    cout << endl;
    printAluno(aluno);



    Curso curso;
    cout << "Insira o nome do curso: ";
    cin >> curso.nome;
    cout << "Insira a duracao do curso: ";
    cin >> curso.duracao;
    curso.aluno = aluno;

    cout << endl;
    cout << "Curso: " << curso.nome << endl;
    cout << "Duracao: " << curso.duracao << " anos" << endl;
    printAluno(aluno);

    return 0;
}