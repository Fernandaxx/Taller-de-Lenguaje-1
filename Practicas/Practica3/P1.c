/* 1. Resuelva:
a.Defina una estructura rectangulo que contenga los siguientes campos : base(float) y altura
(float).
b.Escriba una función que reciba una estructura rectangulo y la inicialice a partir de valores
ingresados por teclado.
c.Escriba una función que dada una estructura rectangulo , calcule el área.
d.Escriba un programa que defina un arreglo de 10 rectángulos(struct rectangulo) y lo
inicialice utilizando la función definida en el inciso anterior.Luego , informe el número de
rectángulo que tiene menor área */

#include <stdio.h>
#define LEN 3

struct rectangulo{
    float base;
    float altura;
};

void InicializarRectangulo(struct rectangulo* R){
    printf("Base: \n");
    scanf("%f" , &R->base);
    printf("Altura: \n");
    scanf("%f" , &(*R).altura);
}

float Area(struct rectangulo R){
    return R.base * R.altura;
}

int main(){
    struct rectangulo R[LEN];

    for (int i = 0; i < LEN; i++){
        InicializarRectangulo((R + i));
    }

    float min = __FLT_MAX__;
    int num;
    for (int i = 0; i < LEN; i++){
        if (Area(R[i]) < min){
            num = i;
            min = Area(R[i]);
        }

    }

    printf("Rectangulo con menor area: %d %f" , num , min);
    return 0;
}