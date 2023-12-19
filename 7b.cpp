#include <iostream>
using namespace std;
extern int globalVar;

int main() {
    globalVar = 10;
    cout << "Novo valor da variável global: " << globalVar << endl;

    return 0;
}
