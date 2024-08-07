/*realizar un programa que muestre al alumno 4 operaciones de suma y le pida que ingrese sus correspondientes resultados. Los
operandos de las operaciones a resolver deben ser generados aleatoriamente y deben estar en el
rango de 0 a 100. Cada operación respondida de forma correcta suma 1 punto. Al finalizar
informar la nota obtenida por el alumno de acuerdo a la siguiente tabla:

Nota: para asegurar que un número se encuentre en el rango de 0 a N, puede utilizar el operador
% con (N+1) como segundo operando.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_OP 100

int ramdomizar();

int main(){
    srand(time(NULL)); // PREGUNTAR por que no funciona dentro del random

    int puntaje = 0;
    int i;
    int op1 , op2 , result;

    for (i = 0; i < 4; i++){
        op1 = ramdomizar(MAX_OP);
        op2 = ramdomizar(MAX_OP);
        printf("\n%d + %d = " , op1 , op2);
        scanf(" %d" , &result);
        if (result == op1 + op2){
            puntaje++;
        }
    }
    printf("Nota Final: ");
    switch (puntaje){
    case 4:
        printf("A");
        break;
    case 3:
        printf("B");
        break;
    case 2:
        printf("C");
        break;
    case 1:
        printf("D");
        break;
    default:
        printf("E :'( ");
        break;
    }

    return 0;
}

int ramdomizar(int max){
    return rand() % (max + 1);
}