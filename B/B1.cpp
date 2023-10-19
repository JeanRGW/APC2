#include <iostream>
using namespace std;

int multiplo(int x){
    if(x%4 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    float x;

    cin >> x;

    cout << multiplo(x);

    return 0;
}