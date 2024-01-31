#include <iostream>
using namespace std;

int somarRecursiva(int *V, int n){
    if(n <= 1){
        return V[0];
    } else {
        return V[n-1] + somarRecursiva(V, n-1);
    }
}

int main(){
    int V[3] = {3, 5, 7};

    cout << somarRecursiva(V, 3);

    return 0;
}