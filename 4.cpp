#include <iostream>
using namespace std;

// Melhor caso: O valor está na primeira posição do vetor V, resultando em uma complexidade de tempo constante O(1).

// Pior caso: O valor não está em V ou está na última posição do vetor.
// Nesse caso, a busca terá que percorrer todo o vetor, resultando em uma complexidade de tempo linear O(n), onde n é o tamanho do vetor V.

// A complexidade de tempo no melhor caso é O(1) e no pior caso é O(n) para a busca sequencial.

int buscar(const int v[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int V[n];
    cout << "Digite os valores do vetor:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> V[i];
    }

    int valor;
    cout << "Digite o número a ser procurado: ";
    cin >> valor;

    int resultado = buscar(V, n, valor);

    if (resultado == -1) {
        cout << "O elemento não foi encontrado." << endl;
    } else {
        cout << "O elemento foi encontrado no índice: " << resultado << endl;
    }

    return 0;
}
