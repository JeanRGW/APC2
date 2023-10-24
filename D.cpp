#include <iostream>
using namespace std;

int main(){
    float numero1 = 7.3, numero2;
    float *fP = &numero1;

    cout << numero1 << endl;

    numero2 = *fP;
    cout << numero2 << endl;

    cout << &numero1 << endl;
    cout << fP << endl;

    return 0;
}