#include <iostream>
#include <cstdlib>
using namespace std;


void preencherArray ( int *array , int tamanho )  {
    for (int i = 0 ; i < tamanho ; i++){
        array[i] = rand() % 500 + 330;
    }
}

void binarySearchWithIterative( int array[] , int tamanho , int itemFind ) {

    for (int i = 0 ; i < tamanho ; i++) {
        
        if (array[i] == itemFind) {
            cout << "O item "  << itemFind << " existe no array com a busca iterativa" <<  endl; 
        }
    }

}


bool binarySearchWithDivideAndCoquer (int *array , int left  , int right , int itemFind ) {

    if ( left > right) {
        return false;
    }

    int mid = left + (right - left) / 2; 


    if (array[mid] == itemFind){
        cout << "O item "  << itemFind << " existe no array com a busca binaria com divisao e conquista" <<  endl; 
        return true;
    }



    if (array[mid] < itemFind ){
        return binarySearchWithDivideAndCoquer( array , mid + 1 , right , itemFind);
    } else {
       return binarySearchWithDivideAndCoquer( array , left , mid - 1 , itemFind);
    }
}



int main(){
    int array[100];

    preencherArray(array , 100);
    
    if (!binarySearchWithDivideAndCoquer(array, 0, 100, 456)) {
        cout << "O item nao foi encontrado." << endl;
    }


    binarySearchWithIterative(array , 100 , 456);
    cout << endl;

    
    return 0;
}
