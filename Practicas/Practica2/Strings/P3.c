/* Escriba una función que reciba un puntero a una cadena de caracteres y dos caracteres individuales ,
y que reemplace en la cadena todas las ocurrencias del primer carácter con el segundo.Además , la
función debe retornar la cadena.¿Retornar la cadena tiene alguna utilidad o no tiene sentido ? */

#include <stdio.h>
#include <string.h>

char* reemplazar(char* const , char , char);


char* reemplazar(char* const cadena , char a , char b){
    for (char* p = cadena; *p != '\0'; p++){
        if (*p == a) *p = b;
    }
    return cadena;
}
int main(){
    char cadena[] = "r33mpl4z4r";
    reemplazar(cadena , '3' , 'e');
    char* puntero = reemplazar(cadena , '4' , 'a');
    printf("%s %c\n" , cadena , *puntero);
}
