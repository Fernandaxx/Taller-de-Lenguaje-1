/* Se desea leer y procesar información de precipitaciones del mes de enero.Para ello se dispone de un
archivo de texto(llamado precipitaciones.txt) con el siguiente formato :
0 - 2 - 0 - 0 - 7 - 22 - 11 - 0 - . . . - 0 -
Por cada de los 31 días se tiene un número entero indicando los milímetros llovidos , seguido de un
guión medio(-) como delimitador.Escriba un programa que lea la información del archivo y
derermine el día con mayor precipitación.Para evaluar el programa , genere un archivo con el
formato establecido utilizando un editor de texto plano(por ejemplo : Bloc de notas o Notepad++).
Nota : puede utilizar la función fscanf para procesar cada valor de precipitación. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* arch = fopen("precipitaciones.txt" , "r");
    if (arch){
        printf("El archivo \"precipitaciones.txt\" esta abierto \n ");
        int n , max = -1 , day;
        char guion;


        for (int i = 0; i <= 31; i++){
            fscanf(arch , "%d %c" , &n , &guion);
            if (n > max){
                max = n;
                day = i;
            }
        }
        printf("Dia de mayor precipitacion %d: " , day);
        fclose(arch);
    }
    else printf("Error al abrir \"precipitaciones.txt\" ");
    return 0;
}