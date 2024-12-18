#include <iostream>
using namespace std;

int main (){
    int inter = 10;
    float real = 10.5;
    char myChar = 'l';



    int *interP = &inter;
    float *realP = &real;
    char *myCharP = &myChar;

    cout << "Antes:" << endl << *interP << endl << *realP << endl << *myCharP << endl; 

    *interP = 20;
    *realP = 20.5;
    *myCharP = 's';


    cout << "Depois:" << endl << *interP << endl << *realP << endl << *myCharP << endl; 
}