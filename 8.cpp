#include <iostream>
using namespace std;

void upperCase(char *palavra, int n){
    for(int i=0; i<n; i++){
        int letra = palavra[i];

        if(letra > 96 && letra < 123){
            letra = letra - 32;
        }

        palavra[i] = letra;
    }
}

int main(){
    char palavra[] = "abcdefghijklmnopqrstuvwxyz ASD";

    int n = sizeof(palavra)/sizeof(palavra[0]);

    upperCase(palavra, n);

    cout << palavra;

    return 0;
}