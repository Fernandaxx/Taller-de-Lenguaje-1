/*  Escriba un programa que reserve en forma dinámica un arreglo de 100 caracteres. A continuación, lea
10 oraciones utilizando la función gets e informe para cada una de ellas la cantidad de letras
minúsculas y de letras mayúsculas que la componen. Utilice el arreglo creado como variable temporal
para procesar cada oración. Por último, libere la memoria reservada dinámicamente.  */

#include <stdio.h>
#include <stdlib.h>

#define length 100
#define oraciones 10

void CantMin_Mayus(char*);
int main(){
    char* String = (char*) calloc(length + 1 , sizeof(char));

    for (int i = 0; i < oraciones; i++){
        printf("Ingrese una oracion: \n");
        fgets(String , length , stdin);
        CantMin_Mayus(String);
    }
    free(String);
}

void CantMin_Mayus(char* String){
    int minus = 0;
    int mayus = 0;

    for (int i = 0; i < length; i++){
        if (String[i] >= 'A' && String[i] <= 'Z') mayus++;
        if (String[i] >= 'a' && String[i] <= 'z') minus++;
    }
    printf("Cantidad de minusculas: %d \nCantidad de mayusculas %d\n" , minus , mayus);
}