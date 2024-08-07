#include <stdio.h>

int main(){
    FILE* arch;
    int cant_mayus = 0;
    int cant_minus = 0;
    int cant_dig = 0;
    arch = fopen("texto.txt" , "r");
    if (arch == NULL){
        printf("no se pudo abrir");
    }
    else{
        char c = fgetc(arch);
        while (!feof(arch)){
            if ((c >= 'A') && (c <= 'Z'))cant_mayus++;
            if ((c >= 'a') && (c <= 'z')) cant_minus++;
            if ((c >= '0') && (c <= '9')) cant_dig++;
            c = fgetc(arch);
        }
        fclose(arch);
    }
    printf("Cantidades: mayus %d , minus: %d , digitos %d" , cant_mayus , cant_minus , cant_dig);
    return 0;
}