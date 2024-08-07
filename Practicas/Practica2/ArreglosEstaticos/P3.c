/*Sea A una matriz con m filas y n columnas y c un número. La multiplicación de una matriz A por un
escalar c está dada por multiplicar cada entrada de A por c:
A′𝑖𝑗 = 𝑐 .𝐴𝑖𝑗
Escriba una función que reciba una matriz A y un número c, y que retorne en A la multiplicación
escalar cA. */


#include <stdio.h>
#define M 2
#define N 3  
// M filas
// N columnas 

void Mult(int[M][N] , int , int , int);
void Mostrar(const int[M][N] , int , int);

int main(){
    int A[M][N] = {{1, 8,  -3},
                  {4 , -2 ,5}};
    int C = 2;
    Mult(A , M , N , C);
    Mostrar(A , M , N);
    return 0;
}
void Mult(int A[M][N] , int m , int n , int c){
    int i , j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            A[i][j] *= c;
        }
    }
}
void Mostrar(const int A[M][N] , int m , int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%i " , A[i][j]);
        }
        printf("\n");
    }

}
