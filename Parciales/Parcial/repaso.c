#include<stdio.h>
int main(){
    int* a , * b , c , d , * e;

    c = 10;
    d = c * 2;
    printf("La direccion memoria de a es %p \n" , &a);
    printf("La direccion la que apunta a es %p \n" , a);
    printf("El valor al que apunta a es %d \n" , *a);

    printf("La direccion memoria de b es %p \n" , &b);
    printf("La direccion la que apunta b es %p \n" , b);
    // printf("El valor al que apunta b es %d \n" , *b);

    printf("La direccion memoria de e es %p \n" , &e);
    printf("La direccion la que apunta e es %p \n" , e);
    printf("El valor al que apunta e es %d \n" , *e);


    a = e;
    printf("2  La direccion memoria de a es %p \n" , &a);
    printf("La direccion la que apunta a es %p \n" , a);
    printf("El valor al que apunta a es %d \n" , *a);

    printf("La direccion memoria de b es %p \n" , &b);
    printf("La direccion la que apunta b es %p \n" , b);
    // printf("El valor al que apunta b es %d \n" , *b);

    printf("La direccion memoria de e es %p \n" , &e);
    printf("La direccion la que apunta e es %p \n" , e);
    printf("El valor al que apunta e es %d \n" , *e);

    e = &c;
    printf("3  La direccion memoria de a es %p \n" , &a);
    printf("La direccion la que apunta a es %p \n" , a);
    printf("El valor al que apunta a es %d \n" , *a);

    printf("La direccion memoria de b es %p \n" , &b);
    printf("La direccion la que apunta b es %p \n" , b);
    // printf("El valor al que apunta b es %d \n" , *b);

    printf("La direccion memoria de e es %p \n" , &e);
    printf("La direccion la que apunta e es %p \n" , e);
    printf("El valor al que apunta e es %d \n" , *e);

    b = a = e;

    printf("4  La direccion memoria de a es %p \n" , &a);
    printf("La direccion la que apunta a es %p \n" , a);
    printf("El valor al que apunta a es %d \n" , *a);

    printf("La direccion memoria de b es %p \n" , &b);
    printf("La direccion la que apunta b es %p \n" , b);
    printf("El valor al que apunta b es %d \n" , *b);

    printf("La direccion memoria de e es %p \n" , &e);
    printf("La direccion la que apunta e es %p \n" , e);
    printf("El valor al que apunta e es %d \n" , *e);
    printf("b: %p\n" , &b);
    printf("e: %p\n" , &e);

    *e = 15;
    printf("5  La direccion memoria de a es %p \n" , &a);
    printf("La direccion la que apunta a es %p \n" , a);
    printf("El valor al que apunta a es %d \n" , *a);

    printf("La direccion memoria de b es %p \n" , &b);
    printf("La direccion la que apunta b es %p \n" , b);
    printf("El valor al que apunta b es %d \n" , *b);

    printf("La direccion memoria de e es %p \n" , &e);
    printf("La direccion la que apunta e es %p \n" , e);
    printf("El valor al que apunta e es %d \n" , *e);
    printf("%d " , c);
    return 0;
}