/* . Escriba un programa que lea un número entero n desde teclado y luego reserve memoria en forma
dinámica para un arreglo de n float.Inicialícelo con valores ingresados por teclado y a continuación
calcule e imprima el promedio de todos ellos.Por último , libere la memoria reservada dinámicamente.
Nota: Modularice la reserva de memoria , la inicialización y el cálculo del promedio. */

#include <stdio.h>
#include <stdlib.h>

float* reservar(int);
void inicializar(float* , int);
float Promedio(float* , int);

int main(){
    printf("Ingrese el tamano del arreglo: ");
    int n;
    scanf("%d" , &n);
    float* ptr = reservar(n);
    inicializar(ptr , n);
    printf("\n Promedio de los elementos del vector %.2f :" , Promedio(ptr , n));
    free(ptr);
    return 0;
}

float* reservar(int n){
    float* p = (float*) malloc(n * sizeof(float));
    return p;
}

void inicializar(float* p , int n){
    for (int i = 0; i < n; i++){
        printf("\n ingrese un float: ");
        scanf("%f" , (p + i));
    }
}

float Promedio(float* p , int n){
    float suma = 0;
    for (int i = 0; i < n; i++){
        suma += p[i];
    }
    return (suma / n);
}