#include <iostream>
using namespace std;

void separarParImpar(int *arr, int *pares, int *impares, int n, int *npar, int *nimpar){
    for(int i=0; i<n; i++){
        if(*(arr+i)%2 == 0){
            *(pares+(*npar)) = *(arr+i);
            (*npar)++;
        } else {
            *(impares+(*nimpar)) = *(arr+i);
            (*nimpar)++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n], pares[n], impares[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int npar=0, nimpar=0;
    separarParImpar(arr, pares, impares, n, &npar, &nimpar);

    cout << "Pares: ";
    for(int i=0; i<npar; i++){
        cout << pares[i] << " ";
    }

    cout << endl << "Impares: ";
    for(int i=0; i<nimpar; i++){
        cout << impares[i] << " ";
    }

    return 0;
}