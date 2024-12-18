#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> fibonacci = { 1 , 1};
    int entrada;

    cin>>entrada;

    for (int i = 0 ; i < entrada ; i++){

        if ( fibonacci[i] < entrada){
            cout << fibonacci[i] << " ";
            fibonacci.push_back(fibonacci[i] + fibonacci[i + 1]);
        } else {
            break;
        }

    }

}