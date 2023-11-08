#include <iostream>
using namespace std;

bool has_zero(int a[], int n) {
    int i;

    for (i = 0; i < n; i++){
        if (a[i] == 0){
            return true;
        }
    }

    return false; // Return movido para fora do for, assim todos os elementos são checados antes de retornar false
}

int main(){
    int V[5] = {1, 5, 2, 9, 1};

    cout << has_zero(V, 5);

    return 0;
}