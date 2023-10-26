#include <iostream>
#include <string>
using namespace std;

void contarVogais(int *ponteiro, string palavra){
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for(int i=0; i < palavra.length(); i++){
        for(int j=0; j<10; j++){
            if(palavra[i] == vogais[j]){
                *ponteiro +=1;
                break;
            }
        }
    }
}

int main(){
    int vogais = 0;
    int *p = &vogais;
    string paralelepipedo = "paralelepipedo";

    contarVogais(p, paralelepipedo);

    cout << vogais;

    return 0;
}