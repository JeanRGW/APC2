#include <iostream>
using namespace std;

int main(){
    int a[] = {1, 3, 7};
    int *p;

    int tamArray = sizeof(a) / sizeof(a[0]);

    for(int i=0; i<tamArray; i++){
        p = &a[i];
        cout << *p << endl;
    }

    return 0;
}