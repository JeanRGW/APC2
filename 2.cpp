#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int *ptr = &var;

    cout << "Endereço original: " << ptr << endl;

    ptr += 4;
    cout << "Endereço após adição: " << ptr << endl;

    return 0;
}
