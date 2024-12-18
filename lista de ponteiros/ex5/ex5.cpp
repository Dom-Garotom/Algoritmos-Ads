#include <iostream>
using namespace std;

int main (){
    int array [5] = { 1 , 3, 4, 6 , 7};

    int *p = &array[0];

    for (size_t i = 0; i < 5; i++){
        *p = *p * 2;
        p++;
    }


    for (size_t i = 0; i < 5; i++){
        cout << array[i] << endl;
    }
}