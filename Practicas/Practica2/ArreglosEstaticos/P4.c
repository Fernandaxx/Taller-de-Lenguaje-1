/* Sea A una matriz con m filas y n columnas. La matriz transpuesta, denotada con At está dada por:

En donde el elemento aji de la matriz original A se convertirá en el elemento aij de la matriz
transpuesta At. Por ejemplo:

Escriba una función que reciba una matriz cuadrada A e imprima en pantalla su matriz transpuesta.*/

#include <stdio.h>
#define N 3

void transpuesta(int A[N][N] , int n){
    int dato;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            dato = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = dato;
        }
    }

}

void Mostrar(const int A[N][N] , int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%i " , A[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[N][N] = {{3,-2,6}, {0,1,8} ,{1,4,5}};
    Mostrar(A , N);
    transpuesta(A , N);
    Mostrar(A , N);
}

