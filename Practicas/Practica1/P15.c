/*Para todo número natural n, se llama factorial de n al producto de todos los naturales desde 1
hasta n:

Escriba una función que reciba como parámetro un número entero y retorne como resultado el
número factorial del mismo.
a. Resolviéndolo de forma iterativa.
b. Resolviéndolo de forma recursiva*/

#include <stdio.h>
int FactorialIterativo(int);
int FactorialRecursivo(int);

int main(){
    printf("factorial de 9: %d \n" , FactorialIterativo(9));
    printf("factorial de 9: %d \n" , FactorialRecursivo(9));

    return 0;
}
// Iterativo
int FactorialIterativo(int n){
    int fact = 1;
    while (n > 1){
        fact *= n;
        n--;
    }
    return fact;
}
//Recursivo
int FactorialRecursivo(int n){
    if (n <= 1)
        return 1;
    else return FactorialRecursivo(n - 1) * n;

}

