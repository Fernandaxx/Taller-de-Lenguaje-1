/* Escriba un programa que lea palabras ingresadas por teclado hasta la lectura de la palabra “FIN”(las palabras tienen
como máximo 20 caracteres).Al finalizar , informe cual es la palabra de menor longitud. */
#include <stdio.h>
#include <string.h>


int main(){
    char  menorLong[20];
    char palabra[20];
    int min = 999;
    printf("ingrese palabra \n");
    scanf("%s" , palabra);
    while (strcmp(palabra , "FIN")){
        if (strlen(palabra) < min){
            min = strlen(palabra);
            strcpy(menorLong , palabra);
        }
        printf("ingrese palabra \n");
        scanf("%s" , palabra);
    }
    printf("Palabra de menor longitud %s " , menorLong);

}