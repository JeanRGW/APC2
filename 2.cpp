#include <iostream>
using namespace std;

bool bissexto(int);

int main(){
    int ano;

    cin >> ano;

    cout << bissexto(ano);

    return 0;
}

bool bissexto(int ano){
        if(ano%4 == 0){
            return true;
        } else {
            return false;
        }
}