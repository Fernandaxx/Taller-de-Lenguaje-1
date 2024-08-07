#include <stdio.h>
#define M 2
#define N 3

void SumaMatriz(int A[M][N] , int B[M][N] , int , int , int[M][N]);
void Mostrar(const int[M][N] , int , int);

int main(){
    int A[M][N] = {{3,-2,6}, {0,1,8}};
    int B[M][N] = {{1,2,3} , {4,5,6}};
    int C[M][N];


    Mostrar(A , M , N);
    Mostrar(B , M , N);
    SumaMatriz(A , B , M , N , C);
    Mostrar(C , M , N);
    return 0;
}


void SumaMatriz(int A[M][N] , int B[M][N] , int m , int n , int  C[M][N]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
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
    printf("\n \n");
}
