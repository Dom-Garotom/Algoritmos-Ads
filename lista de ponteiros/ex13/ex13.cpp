#include <iostream>
using namespace std;

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd) {
    int* temp = new int[n1 + n2]; 
    int count = 0;

    for (int i = 0; i < n1; i++) {
        bool isDuplicate = false;

        for (int k = 0; k < count; k++) {
            if (temp[k] == x1[i]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            for (int j = 0; j < n2; j++) {
                if (x1[i] == x2[j]) {
                    temp[count++] = x1[i];
                    break;
                }
            }
        }
    }

    *qtd = count;
    int* x3 = new int[*qtd];
    
    for (int i = 0; i < *qtd; i++) {
        x3[i] = temp[i];
    }

    delete[] temp;

    return x3;
}

int main() {
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = sizeof(x1) / sizeof(x1[0]);
    int n2 = sizeof(x2) / sizeof(x2[0]);
    int qtd;

    int* x3 = interseccao(x1, x2, n1, n2, &qtd);

    cout << "Vetor interseccao: ";
    for (int i = 0; i < qtd; i++) {
        cout << x3[i] << " ";
    }
    cout << endl;

    delete[] x3;

    return 0;
}
