#include <stdio.h>
#include <stdlib.h>
#define N 1000
#define DEBUG 1


int busqueda(const int* , int , int);

int main(){
    int i;
    int v[N];
    for (i = 0; i < N; i++){
        v[i] = rand() % 100; // valores entre 0 y 99
    }
    v[110] = 25;
    int result = busqueda(v , N , 25);
    if ((result != -1))
        printf("Encontre, posicion %d" , result);
    else printf("NO encontre");

    return 0;
}

int busqueda(const int* v , int n , int valor){
    int i;
    int cant = 0;
    for (i = 0; i < N; i++){
        cant++;
        if (v[i] == valor){
#if DEBUG 
            printf("se ingresaron %d veces al arreglo\n" , cant);
#endif
            return i;
        }
    }
#if DEBUG 
    printf("se ingresaron %d veces al arreglo\n" , cant);
#endif
    return -1;
}