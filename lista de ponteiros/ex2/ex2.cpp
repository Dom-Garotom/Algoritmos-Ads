#include <iostream>
using namespace std;

void soma ( int *a , int *b ) {
    *a = *a + *b;
}

int main (){
    int A = 10;
    int B = 20;


    cout << "Antes: " << A << " - "<< B << endl;

    soma(&A, &B);


    cout << "Depois: " << A << " - "<< B << endl;
}
