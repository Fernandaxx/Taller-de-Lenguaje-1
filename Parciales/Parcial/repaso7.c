/* . El siguiente bloque de código define la estructura struct alu :
    struct alu{
    char apellido[50];
    char nombre[50];
    char legajo[8];
};
A partir de la definición anterior , realice:
a) Renombre el tipo struct alu a alumno.
b) Defina una función que permita inicializar una estructura alumno.
c) Defina un arreglo de 10 elementos de tipo alumno e inicialice cada uno de ellos utilizando la función definida
en el punto b).
d) Imprima la información de cada alumno con el siguiente formato :
Apellido y nombre : Perez , Juan | Legajo : 7751 / 8
Apellido y nombre : García , Pablo | Legajo : 6952 / 1 */

#include <stdio.h>
#include <string.h>

struct alu{
    char apellido[50];
    char nombre[50];
    char legajo[8];
};

typedef struct alu alumno;

void InicializarAlumno(alumno*);
void ImprimirAlumno(const alumno);
alumno LeerAlumno();

int main(){
    alumno vector[5];
    for (int i = 0; i < 5; i++){
        InicializarAlumno(&vector[i]);
        ImprimirAlumno(vector[i]);
    }
    for (int j = 0; j < 5; j++){
        vector[j] = LeerAlumno();
        ImprimirAlumno(vector[j]);

    }



    return 0;
}

void InicializarAlumno(alumno* a){
    strcpy(a->apellido , "Avila");
    strcpy(a->nombre , "Fernanda");
    strcpy(a->legajo , "02931/2");

}
alumno LeerAlumno(){
    alumno a;
    strcpy(a.apellido , "Montoya");
    strcpy(a.nombre , "Eygleen");
    strcpy(a.legajo , "04431/2");
    return a;
}



void ImprimirAlumno(const alumno a){
    printf("Nombre y Apellido: %s , %s | Legajo : %s " , a.nombre , a.apellido , a.legajo);
    printf("\n");
}



