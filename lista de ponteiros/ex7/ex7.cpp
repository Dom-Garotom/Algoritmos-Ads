#include <iostream>
using namespace std;

int main (){
    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    cout << "numero :" << a << " dobro :" << *b * 2 << " o triplo :" << **c * 3 << " o quadruplo :" << ***d * 4 << endl;    
}