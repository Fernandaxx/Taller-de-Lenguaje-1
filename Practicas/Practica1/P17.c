/*Escriba una función que reciba como argumento un número entero n y que dentro de ella lea n
números flotantes desde teclado. La función debe retornar el mínimo y el máximo número leído. */

#include <stdio.h>

void Max_Min(int , float* , float*);

int main(){
    int n;
    float min , max;

    // Leer el número de números a leer
    printf("Introduzca el numero de numeros: ");
    scanf("%d" , &n);

    // Encontrar el mínimo y máximo
    Max_Min(n , &max , &min);

    // Mostrar el resultado
    printf("El minimo es: %.2f\n" , min);
    printf("El maximo es: %.2f\n" , max);
    return 0;
}

void Max_Min(int n , float* max , float* min){
    int i;
    *max = __FLT_MIN__;
    *min = __FLT_MAX__;
    float num;
    for (i = 1; i <= n; i++){
        printf("ingrese un numero flotante\n");
        scanf(" %f" , &num);
        if (num < *min) *min = num;
        if (num > *max) *max = num;
    }
}