#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_CARRERA 20
#define TAM_LEGAJO 10
#define TAM_NOMBRE 30

typedef struct {
    char carrera[TAM_CARRERA];
    char legajo[TAM_LEGAJO];
    char nombre[TAM_NOMBRE];
    float promedio;
} Alumno;
