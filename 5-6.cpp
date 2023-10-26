#include <iostream>
using namespace std;

int menos5Valor(int x);

int menos5Ref(int *x);

int main(){
    int x;

    cin >> x;

    cout << menos5Valor(x) << endl;

    cout << menos5Ref(&x) << endl;

    return 0;
}

int menos5Valor(int x){
    return x-5;
}

int menos5Ref(int *x){
    *x -= 5;
    return *x;
}