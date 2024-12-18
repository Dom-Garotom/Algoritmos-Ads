#include <iostream>
using namespace std;

int fatRecursive( int fatorial){
    if (fatorial == 1){
        return 1;
    }

    return fatorial * fatRecursive(fatorial - 1);
}

int fatIterativa ( int fatorial ){
    int soma = 1 ;

    for (size_t i = fatorial ; i > 0; i--){
        soma = soma * i;
    }

    return soma;
} 

int main()
{
    
    cout << "Recursive: " << fatRecursive(5) << endl;
    cout << "Iterativa: " << fatIterativa(5);
    return 0;
}
