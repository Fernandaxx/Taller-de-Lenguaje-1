/* Escriba un programa que procese un archivo de texto e informe la cantidad de caracteres
minúsculas , mayúsculas y dígitos que posee. */

#include <stdio.h>

int main(){
    FILE* arch;
    arch = fopen("Documento.txt" , "r");
    if (arch){
        printf("archivo abierto\n");
        char car;
        int minus = 0;
        int mayus = 0;
        int dig = 0;

        fscanf(arch , "%c" , &car);
        while (!feof(arch)){
            if (car >= 'a' && car <= 'z')minus++;
            if (car >= 'A' && car <= 'Z')mayus++;
            if (car >= '0' && car <= '9')dig++;
            fscanf(arch , "%c" , &car);
        }


        printf("Min: %d\nMayus: %d\nDig: %d" , minus , mayus , dig);
        fclose(arch);
    }
    else
        printf("Archivo no abierto");
    return  0;
}


