#include <iostream>
#include <math.h>
using namespace std;

int potRecursiva( int base , int expoente){
    if ( expoente == 1){
        return base;
    }

    return base  * potRecursiva( base , expoente - 1); 
}

int potIterativa( int base  ,  int expoente ){
    int soma = 1; 
    soma = pow(base , expoente);
    return soma;
}


int main()
{   
    cout << "Recursiva: " << potRecursiva(2 , 10);
    cout <<"\nIterativa: " << potIterativa(2 , 10);
    return 0;
}
