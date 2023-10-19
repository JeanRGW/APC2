#include <iostream>
using namespace std;

void parOuImpar(){
    int x;

    cin >> x;

    if(x%2 == 0){
        cout << x << " e par";
    } else {
        cout << x << " e impar";
    }
}

int main(){
    parOuImpar();

    return 0;
}