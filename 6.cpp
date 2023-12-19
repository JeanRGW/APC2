#include <iostream>
using namespace std;

void varStatic() {
    static int var = 0;
    var++;
    cout << "Valor da variável estática: " << var << endl;
}

int main() {
    varStatic();
    varStatic();
    varStatic();

    return 0;
}
