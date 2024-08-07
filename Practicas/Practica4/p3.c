/* Escriba un programa que lea un número entero n desde teclado y luego reserve memoria en forma
dinámica para un arreglo de n enteros.Inicialícelo con valores aleatorios y a continuación calcule e
imprima el máximo número almacenado.Por último , libere la memoria reservada dinámicamente.
Nota: Modularice la reserva de memoria , la inicialización y el cálculo del máximo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reservar(int** p , int n){
    *p = (int*) malloc(n * sizeof(int));
}
void inicializar(int* p , int n){
    for (int i = 0; i < n; i++){
        p[i] = rand();
    }

}
void maximo(int* p , int n){
    int max = -1;
    for (int i = 0; i < n; i++){
        max = (p[i] >= max) ? p[i] : max;
    }
    printf("maximo: %d" , max);
}

int main(){
    int* p = NULL;
    printf("ingrese in numero: ");
    int n;
    scanf("%d" , &n);

    reservar(&p , n);
    inicializar(p , n);
    maximo(p , n);

    free(p);
}

