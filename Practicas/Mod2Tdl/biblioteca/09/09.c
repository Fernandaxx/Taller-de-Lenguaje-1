#include <stdio.h>
#include "imath.h"

int main(){
    int n = 1;
    while (n != 0){
        printf("Ingrese un numero: "); scanf("%d" , &n);
        if (n == 0) break;
        if (n % 2 == 0){
            printf("Cuadrado: %d, cubo: %d\n" , cuadrado(n) , cubo(n));
        }
        else{
            printf("Factorial: %d\n" , factorial(n));
        }
    }
}