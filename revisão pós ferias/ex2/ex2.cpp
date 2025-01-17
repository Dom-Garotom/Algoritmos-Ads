#include <iostream>
#include <cstdlib>
using namespace std;



void bubbleShort(int array[], int tamanhoDoArray)
{
    for (size_t i = 0; i < tamanhoDoArray - 1; i++)
    {
        for (size_t j = 0; j < tamanhoDoArray - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int swap = array[j + 1];
                array[j + 1] = array[j];
                array[j] = swap;
            }
        }
    }
}

void preencherArray(int *array, int tamanho, int indice = 0)
{
    if (indice == tamanho)
    {
        return;
    }
    
    *array = rand() % (1 - 100 + 1);

    // anda uma casa na memoria para frente
    preencherArray(array + 1, tamanho, indice + 1);
}


void mostrarArray(int *array, int tamanho, int indice = 0)
{
    if (indice == tamanho)
    {
        return;
    }
    cout << *array << " ";
    mostrarArray(array + 1, tamanho, indice + 1);
}

int maior (int array[] , int tamanho) {
    int maior = 0;

    for(int i = 0 ; i < tamanho ; i++){
        if( array[i] > maior){
            maior = array[i];
        }
    }

    return maior;
}

int main()
{
    int array[20];
    preencherArray(array, 20);  
    cout << "Maior numero : " << maior(array, 20) << endl << "Array : ";
    mostrarArray(array, 20);

    return 0;
}
