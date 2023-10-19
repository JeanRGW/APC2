#include <iostream>
using namespace std;

void volumeEsfera(){
    float x;

    cin >> x;

    cout << (4 * 3.1415 * (x*x*x) / 3);
}

int main(){
    volumeEsfera();

    return 0;
}