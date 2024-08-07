/*14. Escriba una función que reciba un número entero y retorne el número resultante de invertir la
posición de todos sus dígitos. Por ejemplo, si se pasa como argumento el número 1234 la función
deberá retorna el número 4321. */
#include <stdio.h>
int Invertir(int);

int main(){
    printf("invertir 123456:  %d" , Invertir(123456));
    return 0;
}

int Invertir(int n){
    int x = 0;
    while (n > 0){
        x *= 10;
        x += n % 10;
        n /= 10;
    }
    return x;
}
