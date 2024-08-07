/*Escriba un programa que lea 2 números enteros y un carácter, el cual debe corresponderse con un
operador matemático (+, -, /, x), y a partir de ellos imprima el resultado de realizar la operación
pedida en pantalla. En caso de que el carácter no represente un operador válido, imprima un
mensaje de error. Reflexione sobre las diferentes estructuras de control que puede utilizar.*/

#include <stdio.h>
int main(){
    int x , y;
    float result;
    char c;
    printf("Ingrese un numero: ");
    scanf("%d" , &x);
    printf("Ingrese un numero: ");
    scanf("%d" , &y);
    printf("Ingrese una operacion: ");
    scanf(" %c" , &c);

    switch (c){
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '/':
        result = (float) x / y;
        break;
    case '*':
        result = x * y;
        break;
    default:
        result = 0;
        printf("Operador incorrecto!");
        break;
    }
    if (result)
        printf("%d %c %d = %f" , x , c , y , result);
    return 0;
}