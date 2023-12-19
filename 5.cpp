#include <iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 10;
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if (ptr1 > ptr2) {
        cout << "O ponteiro ptr1 está em um endereço mais alto." << endl;
    } else if (ptr1 < ptr2) {
        cout << "O ponteiro ptr2 está em um endereço mais alto." << endl;
    } else {
        cout << "Os ponteiros estão no mesmo endereço." << endl;
    }

    return 0;
}
