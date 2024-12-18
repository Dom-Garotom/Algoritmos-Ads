#include <iostream>
#include <set>
using namespace std;


int* uniao(int *x1, int *x2, int n1, int n2, int* qtd) {
    set<int> conjunto; 

    for (int i = 0; i < n1; i++) {
        conjunto.insert(x1[i]);
    }

    for (int i = 0; i < n2; i++) {
        conjunto.insert(x2[i]);
    }

    *qtd = conjunto.size();
    int* x3 = new int[*qtd];
    
    int index = 0;
    for (int elemento : conjunto) {
        x3[index++] = elemento;
    }

    return x3;
}

int main() {
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = sizeof(x1) / sizeof(x1[0]);
    int n2 = sizeof(x2) / sizeof(x2[0]);
    int qtd;

    int* x3 = uniao(x1, x2, n1, n2, &qtd);

    cout << "Vetor uniao: ";
    for (int i = 0; i < qtd; i++) {
        cout << x3[i] << " ";
    }
    cout << endl;

    delete[] x3;

    return 0;
}
