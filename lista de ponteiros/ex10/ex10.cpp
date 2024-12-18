#include <iostream>
using namespace std;

int negativos(float *vet, int N){
    int count = 0;
    for (int  i = 0; i < N; i++){
        if ( *(vet + i) + *(vet + i) < 0){
            count++;
        }        
    }

    return count;
};


void  preencher (float *vet, int N){
    for (int i = 0 ; i < N; i++){
        cin >> *(vet + i);
    }
}

int main (){

    int N;
    cin >> N;

    float *vet = new float[N];


    preencher(vet , N);

    cout << negativos(vet , N);

}