//Escriba un programa que lea palabras desde teclado hasta leer la palabra "ZZZ". Informe la cantidad 
//de palabras de longitud 5.

#include <stdio.h>
#include <string.h>

int main(){
    char cadena[20];
    int cant = 0;

    printf("Ingrese una palabra: ");
    scanf("%s" , cadena);
    while (strcmp(cadena , "ZZZ")){
        if (strlen(cadena) == 5)
            cant++;
        printf("Ingrese una palabra: ");
        scanf("%s" , cadena);
    }
    printf("Cantidad de palabra de longitud 5 : %d" , cant);
    return 0;
}