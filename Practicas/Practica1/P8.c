/*Identifique y corrija los errores en cada uno de los siguientes códigos (Nota: puede haber más de
uno):  */
// a
#include <stdio.h>
int main(){
    /* int edad;
     edad = 4;
     if (edad >= 40)
         printf("Tiene %d años o más", 40);
     else
         printf("Tiene menos de %d años", 40);*/

         // b

          /*   int total = 0 , x = 1;
             total = 0; //incicializar
             while (x <= 10){
                 total += x;
                 ++x;
             }
             printf("Total = %d",total); */
             //c

 /*   int valor;
    printf("inserte un valor: \n");
    scanf("%d" , &valor);
    switch (valor % 2){
    case 0: printf("El valor es par"); break; //faltaban los break
    case 1: printf("El valor es impar"); break;
    }*/

    //d
    int x , y;
    printf("ingrese x: \n");
    scanf("%d" , &x); //faltaban &
    printf("ingrese y: \n");
    scanf("%d" , &y);
    printf("x + y = %d " , x + y);
    return 0;
}