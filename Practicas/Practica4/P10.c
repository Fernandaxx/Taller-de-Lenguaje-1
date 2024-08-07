/* /* Escriba un programa que lea un número entero n y luego reserve memoria en forma dinámica para
un arreglo de n elementos double.Inicialice las posiciones del arreglo a partir de valores ingresados
por teclado y a continuación imprima el promedio de todos ellos.
a.Empleando notación de arreglos.
b.Empleando notación de punteros.
Por último , libere la memoria reservada.
Nota: modularice la reserva de memoria , la inicialización , el cálculo del promedio y la liberación de
memoria. */

#include <stdio.h>
#include <stdlib.h>

void reservar(double** p , int n){
    *p = (double*) malloc(n * sizeof(double));
}

void inicializar(double* p , int n){
    for (int i = 0; i < n; i++){
        printf("ingrese un numero\n");
        scanf("%f" , &p[i]);
    }
}

double promedio(double* p , int n){
    double prom = 0;
    int i;
    for (i = 0; i < n; i++){
        prom += p[i];
    }
    prom /= n;
    return prom;
}


int main(){
    int n;
    printf("ingrese un numero\n");
    scanf("%d" , &n);
    double* ptr = NULL;

    reservar(&ptr , n);
    inicializar(ptr , n);
    printf("promedio %lf" , promedio(ptr , n));
}