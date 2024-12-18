#include <iostream>
#include <vector>
using namespace std;
#define TAM_MAX 3

int search ( int x , int v[TAM_MAX] ,int n ){
    if (v[n] == x){
        return n;
    }

    return search( x, v , n - 1 );
}

int main()
{
    int array[3] = {0 , 1 , 3};

    cout << search( 3 , array , TAM_MAX);
    
    return 0;
}
