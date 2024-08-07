#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* archivo_read = fopen("Arch7.txt" , "r");

    if (archivo_read == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }
    //A) fgetc y fputc
    FILE* arc1 = fopen("copiaArch7.txt" , "w");

    if (arc1 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    int car = fgetc(archivo_read);
    while (!feof(archivo_read)){
        fputc(car , arc1);
        car = fgetc(archivo_read);
    }

    fseek(archivo_read , 0 , SEEK_SET);

    fclose(arc1);


    //B fgets y fputs
    FILE* arc2 = fopen("Copia2Arch7.txt" , "w");

    if (arc2 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }

    char linea[300];

    while (fgets(linea , 300 , archivo_read)){
        fputs(linea , arc2);
    }
    fputs('\0' , arc2);
    fseek(archivo_read , 0 , SEEK_SET);

    fclose(arc2);


    //c fread y fwrite
    FILE* arc3 = fopen("copia3Arch7.txt" , "wb");
    if (arc3 == NULL){
        printf("ERROR EN LA LECTURA\n");
        return 1;
    }
    while (fread(linea , sizeof(char) , 300 , archivo_read)){
        fwrite(linea , sizeof(char) , 300 , arc3);
    }
    fclose(arc3);

    return 0;
}