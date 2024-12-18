#include <iostream>
#include <cmath>
using namespace  std;

int main (){
    int p,p2,x,x2;

    cin >> p;
    cin >> x;
    cin >> p2;
    cin >> x2;


    int primeiroPonto = pow( (x2 - x) , 2);
    int segundoPonto = pow((p2 - p) ,2 );

    int distanciaEuclidiana = sqrt(primeiroPonto + segundoPonto);

    cout << distanciaEuclidiana;
} 