#include <iostream>
using namespace std;
#define TamMAx 10


int buscaBinaria(int vet[] , int min ,  int max , int item){
    int meio = (min + max) / 2;

    if (vet[meio] == item){
        return meio;
    }

    if ( item > vet[meio]){
        return buscaBinaria( vet , meio + 1 , max, item);
    }

    if ( item < vet[meio]){
        return buscaBinaria( vet , min , meio - 1 , item);
    }

}


int main()
{
    int array[TamMAx] = { 6 ,7 , 8, 9, 10, 11, 12, 13, 14 , 15}    ;

    cout << buscaBinaria(array , 0 , TamMAx ,  13);
    return 0;
}
