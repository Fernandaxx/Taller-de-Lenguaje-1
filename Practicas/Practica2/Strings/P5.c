#include <stdio.h>

void copy(char str1[] , char str2[]){
    int i;
    for (i = 0; str2[i] != '\0'; i++){
        str1[i] = str2[i];
    }
    str1[i] = str2[i];
}
