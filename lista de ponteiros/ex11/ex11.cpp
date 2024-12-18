#include <iostream>
#include <climits>
using namespace std;


void encontraMinEMax(int V[], int n, int* min, int* max) {
    *min = INT_MAX;
    *max = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }
        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int V[] = {4, -1, 9, 0, 3, -5, 7};
    int n = sizeof(V) / sizeof(V[0]);
    int min, max;

    encontraMinEMax(V, n, &min, &max);

    cout << "O valor mínimo do array é: " << min << endl;
    cout << "O valor máximo do array é: " << max << endl;

    return 0;
}
