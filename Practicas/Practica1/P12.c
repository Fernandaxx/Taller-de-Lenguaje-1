/*Escriba un programa que imprima la raíz cuadrada, el cuadrado y el cubo de los números enteros
comprendidos en el rango 1..10.
Nota: para calcular la raíz cuadrada y la potencia de un número investigue las funciones sqrt()
y pow(), ambas de la librería <math.h>*/

#include <stdio.h>
#include <math.h>

int main(){
    int i;
    for (i = 1; i <= 10; i++){
        printf("raiz cuadrada de %d = %.2f\n" , i , sqrt(i));
        printf(" %d al cuadrado = %.2lf\n" , i , pow(i , 2));
        printf(" %d al cubo = %.2lf\n" , i , pow(i , 3));
    }
    return 0;
}