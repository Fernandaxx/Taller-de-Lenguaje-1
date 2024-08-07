/* Defina una macro que reciba tres valores o
expresiones numéricas y retorne el menor
valor.
 Utilizando una única instrucción #define
B ) Definiendo primero una macro que halle el
mínimo entre dos valores o expresiones
numéricas y luego una segunda macro que
la utilice para hallar el mínimo de tres. */

#include <stdio.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))




int main(){
    int x = 12;
    int y = 20;
    int z = 25;

    MENOR_VALOR(x , y , z);


    return 0;
}


