#include <iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 10;
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    cout << "A diferença entre os ponteiros é: " << ptr2 - ptr1 << endl;

    return 0;
}
