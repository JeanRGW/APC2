#include <iostream>
using namespace std;

int somarElementos(float *V, int n){
    if(n <= 1){
        return V[0];
    } else {
        return V[n-1] + somarElementos(V, n-1);
    }
}

int main(){
    float V[3] = {1, 3, 5};

    cout << somarElementos(V, 3);

    return 0;
}