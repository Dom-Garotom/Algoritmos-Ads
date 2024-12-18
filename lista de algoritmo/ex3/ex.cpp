#include <iostream>
#include <cmath>
using namespace std;


int raizes( float a, float b , float c ){
    float delta = pow(b , 2) - ( 4 * ( a * c ) );
    float x1 = ( -b - sqrt(delta) ) / ( 2 * a ); 
    float x2 = ( -b + sqrt(delta) ) / ( 2 * a ); 

    if ( x1 != x2){
        return 2;
    } else if ( x1 = x2 ){
        return 1;
    } else if ( x1 == 0 && x2 ==  0) {
        return 0;
    }

    
}

int main(){
    float a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    raizes(a,b,c);
}