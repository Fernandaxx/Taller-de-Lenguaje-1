#include <stdio.h>
#define DIM 5


void InvertirArreglo(int[] , int);
void imprimirVector(const int[] , int);
void swap(int* a , int* b);

int main(){
    int vector[DIM] = {1,2,3,4,5};
    int i , j;
    imprimirVector(vector , DIM);
    InvertirArreglo(vector , DIM);
    imprimirVector(vector , DIM);

    return 0;
}

void InvertirArreglo(int v[] , int DIM){
    int* ptrInicio = v;
    int* ptrFinal = ptrInicio + DIM;
    int i;
    for (i = 0; i < DIM; i++){
        swap(*&ptrInicio , *&ptrFinal);
        ptrInicio++;
        ptrFinal--;
    }
}



void swap(int* a , int* b){ // parametros por valor, no se moDIMficaban
    int tmp;

    tmp = *a; // guarda el valor de a  
    *a = *b;   // almacena b en a  
    *b = tmp; // almacena a en b  
}


void imprimirVector(const int v[] , int DIM){
    int i;
    for (i = 0; i < DIM; i++){
        printf("  V[%d]  =  %d " , i , v[i]);
        printf("\n");
    }
}