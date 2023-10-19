#include <iostream>
#include <string>
using namespace std;

string parOuImpar(int x){
    if(x%2 == 0){
        return "par";
    } else {
        return "impar";
    }
}

int main(){
    int x;

    cin >> x;

    cout << parOuImpar(x);

    return 0;
}