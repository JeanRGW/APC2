#include <iostream>
using namespace std;

int potenciaRecursiva(int X, int n){
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return X;
    } else if(n>1) {
        return X * potenciaRecursiva(X, n-1);
    }
}

int main(){
    cout << potenciaRecursiva(2, 3) << endl;
    cout << potenciaRecursiva(5, 2);

    return 0;
}