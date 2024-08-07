/*Números naturales y enteros en C:
a. ¿Qué tipos de datos pueden usarse para representar enteros en C?
b. ¿Qué modificadores pueden utilizarse con estos tipos?
c. Para cada combinación de tipo y modificadores indique el tamaño en bytes que ocupa, el
sistema de representación binario y el rango del mismo*/

#include <stdio.h>
int main()
{
    char n0; // enteros pequeños
    short int n1;
    int n2;
    long int n3;
    signed int n4;
    unsigned int n5;

    // char	signed	1byte	Complemento a dos	-128 a 127
    // char	unsigned	1byte	Binario puro	0 a 255
    // short int	signed	2byte	Complemento a dos	-32768 a 32767
    // short int	unsigned	2byte	Binario puro	0 a 65535
    // int	signed	4byte	Complemento a dos	-2147483648 a 2147483647
    // int unsigned 4byte Binario puro 0 a 4294967295
    // long int signed 8byte Complemento a dos - 9223372036854775808 a 9223372036854775807
    // long int unsigned 8byte Binario puro 0 a 18446744073709551615
    return 0;
}