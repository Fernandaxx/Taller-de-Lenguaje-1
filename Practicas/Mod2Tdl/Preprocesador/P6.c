/* Realice un programa que defina una macro AREA_CIRCULO(r) que permita calcular el área de un círculo
para un radio r.El cuerpo del programa debe generar aleatoriamente 10 valores diferentes que
representan radios e imprimir el área correspondiente. */

#include <stdio.h>
#define PI 3.14159
#define AREA_CIRCULO(r) (PI) *(r) * (r)

int main(){
    int radio = 3;
    double area = AREA_CIRCULO(radio);
    printf("Area del circulo: %2.2f" , area);
}