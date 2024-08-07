#include <stdio.h> 
#include <stdlib.h> 

void f(int* p);
int main(){
    int* ptr = NULL;
    f(ptr);
    if (ptr == NULL)
        printf("ptr es NULL\n");
    else
        printf("ptr no es NULL\n");
    return 0;
}
void f(int* p){
    p = (int*) malloc(10 * sizeof(int));
}

//En C todos los parámetros pasan por  valor.El puntero p de la función f es una copia del puntero p de la función main

