#include <iostream>
using namespace std;


void receberNota (float notas[10][4] , int aluno , int bimestre  , float nota  ) {
    notas[aluno][bimestre] = nota;
}   

float apresentarMedia (float notas[10][4] , int numNotas  , int aluno) {
    float media;

    for (size_t i = 0; i < numNotas; i++)
    {
        media += notas[aluno][i];
    }

    return media / numNotas;
}  


int main()
{
    float notas[10][4];
    float nota; 
    

    for (size_t i = 0; i <= 9; i++)
    {
        nota = 0 ;
        for (size_t j = 0; j <= 3; j++){
            cout << "Nota do aluno " << i << " no " << j << " bimestre" << endl;
            cin >> nota;
            receberNota(notas , i , j , nota);
        }
    }
    

    for (size_t i = 0; i <= 9; i++){
        float media = apresentarMedia( notas , 4 , i );
        cout << "Media do aluno " << i << "  e : " << media << endl;
    }
    
    return 0;
}


