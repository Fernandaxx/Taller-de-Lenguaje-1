/*Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
a. retorne el promedio de sus valores.
b. retorne el mínimo de sus valores.
c. retorne la posición del máximo de sus valores.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5

void cargarVector(float[] , int);
void imprimirVector(const float[] , int);
float valorMaximo(const float[] , int);
float valorMinimo(const float[] , int);
float promedioVector(const float[] , int);
int main(){
    float vec[DIM];
    srand(time(NULL));
    cargarVector(vec , DIM);
    imprimirVector(vec , DIM);

    printf("Promedio del vector %.2f\n" , promedioVector(vec , DIM));
    printf("Valor minimo del vector %.2f\n" , valorMinimo(vec , DIM));
    printf("valor maximo del vector %.2f\n" , valorMaximo(vec , DIM));





    return 0;
}

void cargarVector(float v[] , int dim){
    int i;
    for (i = 0; i < dim; i++)
        v[i] = rand();
}

void imprimirVector(const float v[] , int dim){
    int i;
    for (i = 0; i < dim; i++){
        printf("  V[%d]  =  %.2f " , i , v[i]);
        printf("\n");
    }
}

float valorMinimo(const float v[] , int dim){
    float min = __FLT_MAX__;
    int i;
    for (i = 0; i < dim; i++){
        if (v[i] < min) min = v[i];
    }
    return min;
}

float valorMaximo(const float v[] , int dim){
    float max = __FLT_MIN__;
    int i;
    for (i = 0; i < dim; i++){
        if (v[i] > max) max = v[i];
    }
    return max;
}

float promedioVector(const float v[] , int dim){
    float prom = 0;
    for (int i = 0; i < dim; i++){
        prom += v[i];
    }
    return prom / dim;
}


