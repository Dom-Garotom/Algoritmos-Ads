#include <iostream>
using namespace std;

int gcd(int a,int b) {
  int R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  return b;
}

int gcdRecursiva(int a, int b) {
    if (b == 0) 
        return a;
    return gcd(b, a % b); 
}


int main(){
    cout << "Recursiva :" << gcdRecursiva(10 , 4) << endl;    
    cout << "Iterativa :" << gcd(10 , 4) << endl;     
    return 0;
}
