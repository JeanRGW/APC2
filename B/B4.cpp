#include <iostream>
using namespace std;

float volumeEsfera(float x){
    return (4 * 3.1415 * (x*x*x) / 3);
}

int main(){
    float x;

    cin >> x;

    cout << volumeEsfera(x);

    return 0;
}