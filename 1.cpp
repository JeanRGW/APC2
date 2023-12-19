#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int *ptr = &var;

    cout << "Endereço original: " << ptr << endl;

    ptr++;
    cout << "Endereço incrementado: " << ptr << endl;

    ptr--;
    cout << "Endereço decrementado: " << ptr << endl;

    return 0;
}
