#include <stdio.h>
#include <stdlib.h>
#define size 25

// el identificador size estaba en lugar de s,  ocacionando que el precompilador ponga un numero 25 , el cual no es una etiqueta de parametro
void imprimir(int* v , int s){
    int i;
    for (i = 0; i < size; i++){
        printf("v[%d]= %d" , i , v[i]);
    }
}
int main(){
    int v[size];
    imprimir(v , size);
    return 0;
}
//  en la precompliacion el compilador procesa las directitas del preprocesador
// durante la compliacion el codigo 