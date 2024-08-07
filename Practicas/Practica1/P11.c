/*Indique qué valores de la variable de control i se imprimen para cada una de las siguientes
estructuras de control for. Ejecute cada código y analice por qué ocurre cada caso: */

#include <stdio.h>
int main(){
    //a   : imprime todos los valores de i desde 0 a 11
    int i;
    //for (i = 0; i <= 11; i++)
    //    printf("%d\n" , i);
//b   : imprime desde 0 al 11, el incremento de i es distinto pero no afecta 
    //for (i = 0; i <= 11; ++i)
    //   printf("%d\n" , i);

//c   : imprime desde 2 al 10 ya que se inicia en 2 y su incremento es de 2 unidades
    //for (i = 2; i <= 11; i += 2)
    //    printf("%d\n" , i);

 //d   :se imprime, 1,2,4,8 el impremento de i es multiplicado por 2
    //for (i = 1; i <= 11; i *= 2)
    //    printf("%d\n" , i);
 //e    :imprime, 11,9,7,5,3,1 , de manera descendente y descremento de 2
    //for (i = 11; i >= 1; i -= 2)
     //   printf("%d\n" , i);

//f   :imprime : 11 =+ no modifica i -> el que modifica es +=
    for (i = 11; i > 1; i = +1)
        printf("%d\n" , i);
    return 0;
}