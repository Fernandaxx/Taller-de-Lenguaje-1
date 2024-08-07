#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int c = 4;
    int* p1 , * p2;

    p1 = &a;
    p2 = &c;

    printf("(a) %d \n" , a); //1
    printf("(b) %d \n" , b);//2
    printf("(c) %d \n" , c);//4
    printf("(*P1) %d \n" , *p1); //1
    printf("(*P2) %d \n" , *p2);//4

    printf("2\n\n");
    *p1 = (*p2)++;

    printf("(a) %d \n" , a); //4
    printf("(b) %d \n" , b);//2
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //4
    printf("(*P2) %d \n" , *p2);//5

    printf("3\n\n");
    p2 = &b;
    printf("(a) %d \n" , a); //4
    printf("(b) %d \n" , b);//2
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //4
    printf("(*P2) %d \n" , *p2);//2


    printf("4\n\n");
    *p1 += *p2;
    printf("(a) %d \n" , a); //6
    printf("(b) %d \n" , b);//2
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //6
    printf("(*P2) %d \n" , *p2);//2

    printf("5\n\n");
    p1 = p2;
    printf("(a) %d \n" , a); //6
    printf("(b) %d \n" , b);//2
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //2
    printf("(*P2) %d \n" , *p2);//2

    printf("6\n\n");
    ++*p1;
    printf("(a) %d \n" , a); //6
    printf("(b) %d \n" , b);//3
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //3
    printf("(*P2) %d \n" , *p2);//3

    printf("7\n\n");
    p1 = &a;
    printf("(a) %d \n" , a); //6
    printf("(b) %d \n" , b);//3
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //6
    printf("(*P2) %d \n" , *p2);//3



    printf("8\n\n");
    *p2 *= *p1;
    printf("(a) %d \n" , a); //6
    printf("(b) %d \n" , b);//18
    printf("(c) %d \n" , c);//5
    printf("(*P1) %d \n" , *p1); //6
    printf("(*P2) %d \n" , *p2);//18


    printf("9\n\n");
    c = *p2 + *p1;
    printf("(a) %d \n" , a); //6
    printf("(b) %d \n" , b);//18
    printf("(c) %d \n" , c);//24
    printf("(*P1) %d \n" , *p1); //6
    printf("(*P2) %d \n" , *p2);//18


    printf("10\n\n");
    a = *p1 = ++ * p2;
    printf("(a) %d \n" , a); //19
    printf("(b) %d \n" , b);//19
    printf("(c) %d \n" , c);//24
    printf("(*P1) %d \n" , *p1); //19
    printf("(*P2) %d \n" , *p2);//19
    return 0;
}