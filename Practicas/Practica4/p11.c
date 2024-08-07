/* Escriba un programa que lea desde teclado dos valores enteros n y m , y luego reserve memoria en
forma dinámica para una matriz de enteros de n filas por m columnas.Inicialice la matriz creada con
valores ingresados por teclado.Una vez inicializada , imprima las posiciones de todos aquellos valores
múltiplos de 3. Por último , libere la memoria reservada.
Nota: modularice la reserva de memoria , la inicialización , la impresión de las posiciones con valores
múltiplo de 3 y la liberación de memoria. */

#include <stdio.h>
#include <stdlib.h>

void reserva(int*** , int , int);
void inicializacion(int** , int , int);
void impresion(int** , int , int);
void liberar(int*** , int);

int main(){
    int n , m;
    int** matriz;
    printf("Ingrese cantidad de filas: ");
    scanf("%d" , &n);
    printf("Ingrese cantidad de columnas: ");
    scanf("%d" , &m);
    reserva(&matriz , n , m);
    inicializacion(matriz , n , m);
    impresion(matriz , n , m);
    liberar(&matriz , n);
    return 0;
}

void reserva(int*** matriz , int n , int m){
    int i;
    *matriz = (int**) malloc(n * sizeof(int*));

    for (i = 0; i < n; i++){
        *((*matriz) + i) = (int*) malloc(m * sizeof(int));
    }
}

void inicializacion(int** matriz , int n , int m){
    int i , j;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("Ingrese el elemento de la posicion (%d,%d): " , i , j);
            scanf("%d" , *(matriz + i) + j);
        }
    }
}

void impresion(int** matriz , int n , int m){
    int i , j;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (matriz[i][j] % 3 == 0) printf("(%d,%d)" , i , j);
        }
    }
}

void liberar(int*** matriz , int n){
    int i , j;

    for (i = 0; i < n; i++){
        free(*((*matriz) + i));
        *((*matriz) + i) = NULL;
    }

    free(*matriz);
    *matriz = NULL;
}