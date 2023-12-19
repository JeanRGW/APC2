#include <iostream>
using namespace std;
// Compilador não permitiu variavel de registrador na minha máquina, "ISO C++17 does not allow 'register' storage class specifier".

void varRegistrador() {
    register int var = 0;
    var++;
    cout << "Valor da variável de registro: " << var << endl;
}

int main() {
    varRegistrador();
    varRegistrador();
    varRegistrador();

    return 0;
}
