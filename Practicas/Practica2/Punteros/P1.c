/* Rehaga el ejercicio 2 de la sección Arreglos Estáticos, pero en este caso escribiendo una única función
que retorne los 3 valores pedidos.

Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
a. retorne el promedio de sus valores.
b. retorne el mínimo de sus valores.
c. retorne la posición del máximo de sus valores.  */

#include <stdio.h>
#define DIM 7

void Estadisticas(float v[] , int length , float* max , float* min , float* prom){
    float sum = 0;
    int i;
    *min = __FLT_MAX__;
    *max = __FLT_MIN__;
    for (i = 0; i < length; i++){
        sum += v[i];
        if (v[i] < *min) *min = v[i];
        if (v[i] > *max) *max = v[i];
    }
    *prom = sum / length;
}

int main(){
    float V[] = {1,4,8,4,2,36,3};
    float max , min , prom;
    Estadisticas(V , DIM , &max , &min , &prom);
    printf("Maximo : %2.2f , Minimo : %2.2f , Promedio : %2.2f " , max , min , prom);
}

