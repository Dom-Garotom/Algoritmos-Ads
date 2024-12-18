#include <iostream>
using namespace std;

int main(){
    int array [5];

    for (size_t i = 0; i < 5; i++){
        cin >> array[i];
    }

    for (size_t i = 0; i < 5; i++)
    {
        if (array[i] % 2 == 0 ){
            cout << "Numero : " << array[i] << " posicao : " << &array[i] << endl; 
        }
    }
    
}