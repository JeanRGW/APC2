#include <iostream>
using namespace std;

void decompor(double x, int *inteira, double *frac){
    *inteira = x;
    *frac = x- (*inteira);
}

int main(){
    int inteira;
    double x, frac;

    cin >> x;
    decompor(x, &inteira, &frac);
    cout << inteira << " " << frac;

    return 0;
}