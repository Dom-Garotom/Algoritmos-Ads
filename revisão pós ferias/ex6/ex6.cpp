#include <iostream>
#include <cstdlib>
using namespace std;


void preencherArray ( int *array , int tamanho )  {
    int luck;
    for (int i = 0 ; i < tamanho ; i++){
        luck = rand() % 2 + 1;

        if (luck == 2){
            array[i] = rand() % 3430 + 232;
        } else {
            array[i] = rand() % 7546 + 5483;
        }

    }
}

void maiorAndMenor( int array[] , int tamanho ) {
    int minElem = array[0];
    int maxElem = array[0];

    for (int i = 0 ; i < tamanho ; i++) {
        
        if (array[i] < minElem) {
            minElem = array[i];
        }

        if (array[i] > maxElem) {
            maxElem = array[i];
        }
    }

    cout << "Menor "  << minElem  << endl; 
    cout << "Maior "  << maxElem  << endl; 
}

int minDivideAndCoquer (int *array , int left  , int right ) {

    if (left == right ){
        return array[left];
    }

    int mid = left + (right - left) / 2; 


    int minLeftSide = minDivideAndCoquer( array , left , mid );
    int minRightSide = minDivideAndCoquer( array , mid + 1 , right );


    if (minLeftSide  < minRightSide){
        return minLeftSide;
    } else {
        return minRightSide;
    }
}

int maxDivideAndConquer (int *array , int left , int right) {
    if ( left == right){
        return array[left];
    }

    int mid =  left + ( right - left ) /  2 ;

    int maxLeftSide = maxDivideAndConquer( array , left , mid);
    int maxRightSide = maxDivideAndConquer(array ,  mid  + 1 , right );

    if ( maxLeftSide > maxRightSide){
        return maxLeftSide;
    } else {
        return maxRightSide;
    }

}




int main(){
    int array[100];

    preencherArray(array , 100);
    maiorAndMenor(array , 100);

    cout << "Menor com divisao e conquista : " << minDivideAndCoquer(array , 0 , 99) << endl ; 
    cout << "Maior com divisao e conquista : " << maxDivideAndConquer(array , 0 , 99); 

    cout << endl;

    
    return 0;
}
