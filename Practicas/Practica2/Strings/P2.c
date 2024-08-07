/* Escriba un programa que lea palabras desde teclado hasta leer la palabra "XXX".Se requiere
informar la cantidad de palabras ingresadas que terminan con la letra ‘o’. */

#include <stdio.h>
#include <string.h>

# define FIN "XXX"
int main(){
    char cadena[20];
    int cant = 0;
    int final;

    printf("Ingrese una palabra: ");
    scanf("%s" , cadena);
    while (strcmp(cadena , FIN)){
        final = strlen(cadena);
        cant += cadena[final - 1] == 'o';
        printf("Ingrese una palabra: ");
        scanf(" %s" , cadena);
    }
    printf("cant parabras que terminan en o %d" , cant);
    return 0;

}