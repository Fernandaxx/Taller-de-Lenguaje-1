#include <stdio.h>
#define CANT_NUM 3

int main(){
    FILE* archT = fopen("Arch8.txt" , "w+");
    FILE* archB = fopen("Arch8.dat" , "wb+");

    if (archT == NULL || archB == NULL){
        printf("ERRROR");
        return -1;
    }

    printf("ingrese %d numeros del 0 al 9\n" , CANT_NUM);
    int n[CANT_NUM];
    for (int i = 0; i < CANT_NUM; i++){
        scanf("%d" , n + i);
        fprintf(archT , "%d" , n[i]);
    }
    fwrite(&n , sizeof(int) , CANT_NUM , archB);

    fclose(archT);
    fclose(archB);
    return 0;

}