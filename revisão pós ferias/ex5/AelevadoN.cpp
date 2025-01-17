#include <iostream>
#include <cmath>
using namespace std;


int aElevadoPorN( int A , int N ){
    
    if ( N == 0){
        return 1;
    }

    // divide as varias recurções de N
    int soma = aElevadoPorN(A , N / 2);


    // agrupa os resultados das divisões e multiplica 

    if ( N % 2 == 0 ){
        return soma * soma;
    }

    return A * soma * soma;
}




int main(){
    cout << aElevadoPorN(2 , 10);
    
    system("pause");
    return 0;
}
