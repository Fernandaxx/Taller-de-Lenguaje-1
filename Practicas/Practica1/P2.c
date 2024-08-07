/*a. ¿Qué ocurre cuando asignamos un char a un int? ¿y al revés? Ejecute el siguiente código
y analice lo que imprime. ¿Se presenta algún warning al compilar?
*/

// cuando se asigna un char a un int se realiza una conversion a su cod ASCCi
#include <stdio.h>
int main()
{
    char c = 'a'; // a = 97 [-128 , 127]
    int x = 64;
    printf("char c= %c\n", x); // c = car(x=64) = @
    printf("int x= %d\n", c);  // x = num(c=a) = 97

    /*b. ¿Qué diferencia existe entre los tipos float y double? ¿se puede asignar entre si sin inconvenientes?

    Ambos representan numeros con decimales, pero se diferencian en tamaño float=4bytes y double= 8 bytes*/

    float f = 38.0922;
    double d = 12.2;

    printf("float f = %f \n", f);
    printf("double d = %lf\n", d);

    /*c. ¿Qué sucede cuando en una operación intervienen operadores diferentes? Por ejemplo: x = 2*32+10%2-1;
        primero- % * / (izq a der) -segundo + - */

    x = 2 * 32 + 10 % 2 - 1; // 2*32= 64 + 10%2=0 -1 = 63
    printf("x = %d\n", x);

    /*d. Investigue el operador sizeof. ¿Para qué sirve? Luego aplíquelo y verifique el tamaño de los distintos tipos de datos en su máquina.

    Sizeof determina el tamaño en bytes de un tipo de dato*/

    printf("Tamano de int: %d bytes\n", sizeof(x));    // 4bytes
    printf("Tamano de float: %d bytes\n", sizeof(f));  // 4bytes
    printf("Tamano de double: %d bytes\n", sizeof(d)); // 8 bytes
    printf("Tamano de char: %d bytes\n", sizeof(c));   // 1 byte
    return 0;
}