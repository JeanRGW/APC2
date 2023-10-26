#include <iostream>
#include <string>
using namespace std;

void inverterString(string *texto){
    int tamanho = (*texto).length();
    string inverso = "";

    for(int i = tamanho-1; i >= 0; i--){
        inverso += (*texto)[i];
    }

    for(int i=0; i<tamanho; i++){
        *texto = inverso;
    }
}

int main(){
    string texto = "Cleitin do vrau.";
    string *pTexto = &texto;

    inverterString(pTexto);

    cout << texto;
}