#include <stdio.h>
#include <iostream>

#define MAX 5

using namespace std;

void inverter(int numeros[MAX], int posicao) {
    if (posicao < MAX / 2) {
        int tmp = numeros[posicao];
        int nova_posicao = MAX - posicao - 1;
        numeros[posicao] = numeros[nova_posicao];
        numeros[nova_posicao] = tmp;
        inverter(numeros, posicao + 1);
    }
}

int main(void) {
    int numeros[MAX];
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;

    inverter(numeros, 0);

    for (int i = 0; i < MAX; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
