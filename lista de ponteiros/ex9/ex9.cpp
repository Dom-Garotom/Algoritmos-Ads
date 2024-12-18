#include <Iostream>
using namespace std;

void frac(float num, int* inteiro , float* frac){
    *inteiro  = (int)(num);
    *frac = num - *inteiro;

}


int main (){
    float a = 20.17;
    int b;
    float c;


    frac(a, &b , &c);

    cout << "Fracao : " << c << endl;
    cout << "Inteiro : " << b << endl;
    cout << "Numero real : " << a << endl;
}