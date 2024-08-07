#include <stdio.h>
#define Dim 10
int main(){
    int vector[Dim] = {10,20,30,40,50,60,70,80,90,100};
    int i;
    int* p = vector;
    for (i = 0; i < Dim; i++){
        *p += 3;
        printf("vector[%d] = %d \n" , i , vector[i]);
        p += 2;
    }
    return 0;
}