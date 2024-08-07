
#include <stdio.h>
#include <stdlib.h>

struct Alumno{
    char carrera[20];
    char legajo[10];
    char nombre[30];
    float promedio;
};
typedef struct Alumno Alumnoss;

void Alumnos_carrera(FILE* , char[] , char[]);

int main(){
    FILE* arch_bin;
    arch_bin = fopen("alumnos.bin" , "rb");
    Alumnos_carrera(arch_bin , "texto_alumnos.txt" , "Ingenieria");
}
void Alumnos_carrera(FILE* arch_bin , char* nombre , char* carrera){
    Alumnoss alu;
    FILE* arch_texto;
    arch_texto = fopen(nombre , "wb");

    while (fread(&alu , sizeof(Alumnoss) , 1 , arch_bin) == 1){
        //printf("carrera: %s \nlegajo: %s\nnombre: %s\npromedio%f",alu.carrera,alu.legajo,alu.nombre,alu.promedio);
        if (strcmp(alu.carrera , carrera) == 0)
            fprintf(arch_texto , "%s,%s,%f\n" , alu.legajo , alu.nombre , alu.promedio);
    }
}

