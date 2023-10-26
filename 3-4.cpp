#include <iostream>
using namespace std;

int soma10Valor(int x);

int soma10Ref(int *x);

int main(){
    int x;
    cin >> x;

    cout << soma10Valor(x) << endl;
    cout << soma10Ref(&x) << endl;

    return 0;
}

int soma10Valor(int x){
    return x+10;
}

int soma10Ref(int *x){
    *x += 10;
    return *x;
}