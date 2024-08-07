/*Escriba un programa que, a partir de un número flotante leído desde teclado, el cual representa
una distancia en kilómetros, imprima su equivalente en millas.
Nota: 1,61 Km ≈ 1 milla. */

#include <stdio.h>

int main()
{
    float f;
    float conv;
    printf("Ingrese una distancia en km: \n");
    scanf("%f", &f);
    conv = f / 1.61;
    printf("Numero en millas: %f", conv);
    return 0;
}