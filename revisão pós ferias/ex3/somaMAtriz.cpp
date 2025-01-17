#include <iostream>
#include <cstdlib>
using namespace std;


void preencherMatriz (int (*matriz)[5], int linha) {
    for (size_t i = 0; i < linha; i++){
        for (size_t j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100 + 1; 
        }
    }
}

void mostrarMatriz (int (*matriz)[5], int linha) {
    for (size_t i = 0; i < linha; i++){
        for (size_t j = 0; j < 5; j++){
            cout << " " << matriz[i][j];
        }
        cout << endl;
    }
}

int somarMatriz (int (*matriz)[5] , int linha) {
    int soma;
   
    for (size_t i = 0; i < linha; i++){
        for (size_t j = 0; j < 5; j++){
            soma += matriz[i][j] ; 
        }
    }

    return soma;
}


int main()
{
    int matriz[5][5];
    preencherMatriz( matriz, 5);
    cout << "Soma dos elementos : " << somarMatriz(matriz , 5) << endl;
    mostrarMatriz(matriz , 5);
    
    return 0;
}
