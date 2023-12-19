#include <iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 10;
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if (ptr1 > ptr2) {
        cout << "A variável var1 está em um endereço mais alto." << endl;
    } else if (ptr1 < ptr2) {
        cout << "A variável var2 está em um endereço mais alto." << endl;
    } else {
        cout << "As variáveis estão no mesmo endereço ou são inválidas." << endl;
    }

    return 0;
}
