#include <iostream>
using namespace std;

struct indices {
    int i;
    int j;
};

indices duasSomas(int x, int *v, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i] + v[j] == x){
                return indices{i, j};
            }
        }
    }

    return indices{-1, -1};
}

int main(){
    int n, x;

    cin >> n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    cin >> x;

    indices indiceEncontrado = duasSomas(x, v, n);
    cout << endl << indiceEncontrado.i << endl << indiceEncontrado.j;

    return 0;
}