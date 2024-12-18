#include <iostream>
using namespace std;

int sortList ( int *a , int  *b , int *c){
    int array [3] = { *a , *b , *c};

    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            if (array[i] > array[j]){
                int swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }

    for (size_t i = 0; i < 3; i++){
        *a = array[2];
        *b = array[1];
        *c = array[0];
    }
    
    if (*a == *b && *b == *c){
        return 1;
    } 

    return 0;
}


int main(){
    int a = 1330;
    int b = 155504;
    int c = 10;

    cout << "Antes :" << endl << a  << endl << b << endl << c << endl;

    sortList(&a , &b, &c);


    cout << "Depois :" << endl << a  << endl << b << endl << c << endl;





}