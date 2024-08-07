/* Defina una macro que reciba tres valores o
expresiones numéricas y retorne el menor
valor.
 Utilizando una única instrucción #define
 Definiendo primero una macro que halle el
mínimo entre dos valores o expresiones
numéricas y luego una segunda macro que
la utilice para hallar el mínimo de tres. */

#include <stdio.h>
#define MENOR_VALOR(a,b,c) (((a) < (b) ? ((a) < (c) ? (a) : (c) ) : ((b) < (c)) ? (b) : (c)) )




int main(){
    int x = 12;
    int y = 26;
    int z = 8;

    int i = MENOR_VALOR(x , y , z);
    printf("El menor valor entre %d, %d, y %d es %d " , x , y , z , i);



    return 0;
}