#include <stdio.h>

int funcion(char* archTexto , char* archBin){
    struct inf{
        int lon;
        int pos;
    };
    typedef struct inf info;

    FILE* archT = fopen(archTexto , "r");

    if (archT == NULL){
        return 2;
    }

    FILE* archB = fopen(archBin , "wb");
    if (archB == NULL){
        fclose(archT);
        return 3;
    }

    char cadena[100];
    info i;
    while (fgets(cadena , 100 , archT)){
        i.pos = ftell(archT) - 1;
        i.lon = strlen(cadena);
        fwrite(&i , sizeof(info) , 1 , archB);
    }

}