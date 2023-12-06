#include <iostream>
using namespace std;

void preencher(int *arr, int n){
    for(int i=0; i<n; i++){
        arr[i] = i;
    }
}

void exibir(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n, *arr;
    cin >> n;

    arr = new int[n];

    preencher(arr, n);

    exibir(arr, n);

    delete arr;
    return 0;
}