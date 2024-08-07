/*Escriba un programa que genere 50 números enteros en forma pseudoaleatoria y que los almacene en
un arreglo unidimensional. Luego de realizada la carga, informar la cantidad de números pares que
se encuentran en posiciones impares del arreglo y también la cantidad de números impares que se
encuentran en posiciones pares.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 50

void cargarVector(int[] , int);
void imprimirVector(const int[] , int);
void numParesImpares(const int[] , int , int* , int*);


int main(){
    int par = 0;
    int impar = 0;
    srand(time(NULL));
    int vec[DIM];
    cargarVector(vec , DIM);
    imprimirVector(vec , DIM);
    numParesImpares(vec , DIM , &par , &impar);

    printf("Cantidad de numeros pares en posiciones impares %d \n" , par);
    printf("Cantidad de numeros impares en posiciones pares %d\n" , impar);

    return 0;
}

void cargarVector(int v[] , int dim){
    int i;
    for (i = 0; i < dim; i++)
        v[i] = rand();
}

void imprimirVector(const int v[] , int dim){
    int i;
    for (i = 0; i < dim; i++){
        printf("  V[%d]  =  %d " , i , v[i]);
        printf("\n");
    }
}

void numParesImpares(const int v[] , int dim , int* par , int* impar){
    int i;
    for (i = 0; i < dim; i++){
        if (i % 2 == 0){
            if (v[i] % 2)
                *impar += 1;
        }
        else if (v[i] % 2 == 0)
            *par += 1;
    }
}


