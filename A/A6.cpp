#include <iostream>
using namespace std;

void potencia(){
    int x, y, res=1;

    cin >> x >> y;

    for(y; y>0; y--){
        res *= x;
    }

    cout << res;
}

int main(){
    potencia();

    return 0;
}