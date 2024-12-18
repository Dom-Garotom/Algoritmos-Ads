#include <iostream>
using namespace std;

int soma( int indice , int n ){

    if ( indice == n){
        return n;
    }

    return  indice + soma( indice + 1 , n) ;
}

int main(){
    cout << soma(0 , 5);
    
    return 0;
}
