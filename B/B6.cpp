#include <iostream>
using namespace std;

int potencia(int x, int y){
    int res=1;

    for(y; y>0; y--){
        res *= x;
    }

    return res;
}

int main(){
    int x, y;

    cin >> x >> y;

    cout << potencia(x, y);

    return 0;
}