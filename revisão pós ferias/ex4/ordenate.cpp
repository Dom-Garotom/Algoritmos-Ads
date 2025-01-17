#include <iostream>
#include <cstdlib>
using namespace std;

void bubbleShort(int array[], int tamanhoDoArray){
    for (size_t i = 0; i < tamanhoDoArray - 1; i++){

        int isMoving = 0;

        for (size_t j = 0; j < tamanhoDoArray - 1 - i; j++){
            if (array[j] > array[j + 1]){
                int swap = array[j + 1];
                array[j + 1] = array[j];
                array[j] = swap;
                isMoving++;
            }
        }

        if (isMoving < 1){
            break;
        }
    }
}


void preencherArray ( int *array , int tamanho )  {
    for (int i = 0 ; i < tamanho ; i++){
        array[i] = rand() % 100 + 1;
    }
}


void mostrarArray ( int *array , int tamanho)  {
    for (int i = 0 ; i < tamanho ; i++){
        cout << " " << array[i];
    }
}

int main(){
    int array[100];

    preencherArray(array , 100);
    bubbleShort(array , 100);
    mostrarArray(array , 100);

    
    system("pause");
    return 0;
}
