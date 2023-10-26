#include <iostream>
using namespace std;

int multValor(int x, int y);

int multRef(int *x, int *y);

int main(){
    int x, y;

    cin >> x >> y;

    cout << multValor(x, y) << endl;
    cout << multRef(&x, &y) << endl;

    return 0;
}

int multValor(int x, int y){
    return x*y;
}

int multRef(int *x, int *y){
    return (*x) * (*y);
}