/* Escriba un programa que lea un número entero desde teclado y luego informe la cantidad de veces
que aparece cada dígito en el mismo.*/

#include <stdio.h>

void repeticionesDig(int[] , int);
void contar(int[] , int);

int main(){
    int v[10] = {0};
    int n = 1223334444;
    repeticionesDig(v , n);
    contar(v , 10);

    return 0;
}

void repeticionesDig(int V[] , int n){
    int dig;
    while (n != 0){
        dig = n % 10;
        V[dig]++;
        n /= 10;
    }
}

void contar(int v[] , int length){
    for (int i = 0; i < length; i++){
        printf("Concurrencias de %i = %i \n" , i , v[i]);
    }

}