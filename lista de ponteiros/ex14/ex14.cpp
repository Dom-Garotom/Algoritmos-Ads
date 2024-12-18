#include <iostream>
using namespace std;

void lerElementos(int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }
}

int main() {
    int n;
    
    cout << "Digite a quantidade de elementos: ";
    cin >> n;

    int* vetor = new int[n];

    lerElementos(vetor, n);

    cout << "Vetor preenchido: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete[] vetor;

}
