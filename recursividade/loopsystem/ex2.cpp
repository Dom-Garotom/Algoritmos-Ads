#include <iostream>
using namespace std;


int soma (int a , int b){
    return a + b;
}

void system ( int actions ){
    if (actions != 1) {
        return;
    }

    int a , b , action;

    cin >> a; 
    cin >> b;

    cout << soma(a, b) << endl;

    cout << "Digite 1 se desejar executar o programa novamente " << endl;
    cin >> action;

    return system(action);
}


int main()
{
    system(1);
    return 0;
}
