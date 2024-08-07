/* 5. Muchas veces al trabajar en modo gráfico con ventanas se necesitan las dimensiones(posición x ,
posición y , ancho y alto) de diferentes formas para pasarlas como parámetros a distintas funciones.
Defina una unión que comparta estas 3 formas de acceso para la definición de un rectángulo de una
ventana : todas separadas(x , y , ancho , alto) , como dos puntos([x1 , y1] , [x2 , y2] o[x , y] , [ancho , alto]) o
todas juntas como un rectángulo([x , y , ancho , alto])
 */

#include <stdio.h>

int misterio(unsigned);
void verBits(unsigned);

int main(){
    unsigned x;

    printf("Ingrese un entero: ");
    scanf("%u" , &x);

    verBits(x);

    printf("\nEl resutado es %d\n" , misterio(x));

    return 0;
}

int misterio(unsigned bits){
    unsigned i;
    unsigned mascara = 1 << 31;
    unsigned total = 0;

    for (i = 1; i <= 32; i++ , bits <<= 1)

        if ((bits & mascara) == mascara)
            total++;

    return !(total % 2) ? 1 : 0;
}

void verBits(unsigned valor){
    unsigned Mascara = 1 << 31;

    printf("%10u = " , valor);

    for (int i = 1; i <= 32; i++){
        putchar(valor & Mascara ? '1' : '0');
        valor = valor << 1;

        if (i % 8 == 0)
            putchar(' ');
    }
}