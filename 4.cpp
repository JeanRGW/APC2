#include <iostream>
#include <string>
using namespace std;

bool senhaValida(string);

int main(){
    string senha;

    cin >> senha;

    cout << senhaValida(senha);

    return 0;
}

bool senhaValida(string senha){
    int i = senha.length();
    int ascii;
    if(i < 8){
        return false;
    }

    i -= 1;

    bool mai, min, num;

    for(i; i>=0; i--){
        ascii = senha[i];

        if(ascii > 64 && ascii < 91){
            mai = true;
        }

        if(ascii > 96 && ascii < 123){
            min = true;
        }

        if(ascii > 47 && ascii < 58){
            num = true;
        }
    }

    if(mai && min && num){
        return true;
    } else {
        return false;
    }
}