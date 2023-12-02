#include <iostream>
using namespace std;

void minMax(int *vetor, int tamanho, int *min, int *max){
    *min, *max = *vetor;

    for(int i=0; i<tamanho; i++){
        if(*(vetor+i) < *min){
            *min = *(vetor+i);
        }

        if(*(vetor+i) > *max){
            *max = *(vetor+i);
        }
    }
}

int main(){
    int min, max, n;

    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    minMax(arr, n, &min, &max);

    cout << min << endl << max;

    return 0;
}