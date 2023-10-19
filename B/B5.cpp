#include <iostream>
using namespace std;

int fatorial(int x){
    int res = 1;

    for(x; x>0; x--){
        res *= x;
    }

    return res;
}

int main(){
    int x;

    cin >> x;

    cout << fatorial(x);

    return 0;
}