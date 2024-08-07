#include <stdio.h>
#define EXCLUIR 0

int main(){
    fgets(stdin);

    int i;
    for (i = 1; i < 5; i++){
#ifdef EXCLUIR 
        printf("%d " , 3 - i);
#undef EXCLUIR

#else
        printf("%d" , i);
#endif
    }
#ifdef EXCLUIR
    printf("si");
#endif
#ifndef EXCLUIR
    printf("no");
#endif
    return 0;

}