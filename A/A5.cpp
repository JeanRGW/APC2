#include <iostream>
using namespace std;

void fatorial(){
    int x, res = 1;

    cin >> x;

    for(x; x>0; x--){
        res *= x;
    }

    cout << res;
}

int main(){
    fatorial();

    return 0;
}