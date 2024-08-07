/* Escriba un programa que lea una palabra desde teclado y luego informe la cantidad de veces que
aparece cada letra de la palabra leída en ella misma.
Nota: asuma que la palabra está formada sólo por letras minúsculas */

#include <stdio.h>

int main(){
    int freq[26] = {0};
    char str[50];
    scanf("%s" , str);

    for (int i = 0; str[i] != '\0'; i++)
        freq[str[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (freq[i]) printf("%c %d\n" , 'a' + i , freq[i]);
}
