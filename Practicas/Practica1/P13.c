/*Un número primo es un número natural mayor que 1, que tiene dos divisores distintos
únicamente: él mismo y el 1.
a. Escriba una función que reciba como parámetro un número entero n y determine si el
mismo es primo o no.
b. Escriba un programa que lea números enteros desde teclado hasta que la cantidad de
números primos leídos sea 5. */

#include <stdio.h>
int EsPrimo(int);
int main(){
    int n;
    int cant = 0;

    printf("Ingrese el numero a verificar si es primo \n");
    scanf("%d" , &n);
    while (cant != 5){
        if (EsPrimo(n)){
            cant++;
            printf("El numero es Primo\n");
        }
        else{
            printf("El numero no es Primo\n ");
        }
        printf("Ingrese el numero a verificar si es primo \n");
        scanf("%d" , &n);
    }
    return 0;
}

int EsPrimo(int x){
    int i;
    for (i = 2; i < x; i++){
        if (x % i == 0){
            return 0; //no es primo
        }
    }
    return 1; // es primo 
}