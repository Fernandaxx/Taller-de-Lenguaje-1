#include <stdio.h>
#include <stdlib.h>
#define LONG 30

typedef struct{
    char nombre[LONG];
    char apellido[LONG];
    unsigned int edad;
    unsigned int titulos;
    unsigned int ranking;
    double fortuna;
} jugador;

int main(){
    FILE* f = fopen("../Prctica-5---Recursos/jugadores" , "rb");
    if (f == NULL){
        printf("Error en la lectura\n");
        return 1;
    }

    //printf("%d\n", sizeof(jugador));
    jugador j;
    int total = 0 , cant = fread(&j , sizeof(char) , 1 , f);
    while (cant){
        //printf("cant: %d\n", cant);
        total += cant;
        cant = fread(&j , sizeof(char) , 1 , f);
    }
    fclose(f);

    printf("La cantidad de bytes del archivo es: %d\n" , total);
    //Se guarda sin huecos????


    f = fopen("../Prctica-5---Recursos/jugadores" , "rb");
    if (f == NULL){
        printf("Error en la lectura\n");
        return 1;
    }

    fseek(f , 0 , SEEK_END);
    printf("La cantidad de bytes del archivo es: %d\n" , ftell(f));
    fclose(f);
    return 0;
}