#include <iostream>
using namespace std;

int main (){
    float matriz [3][3];

    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 3; j++){
            cout << &matriz[i][j] <<  " ";
        } 

        cout << endl;
    }
    
}