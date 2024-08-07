#include <stdio.h>

int main(){
    FILE* arch;
    int v[10] , i;
    arch = fopen("AccesoDirecto" , "rb");
    if (arch == NULL)
        printf("no se pudo abrir");
    else{
        fread(v , sizeof(int) , 10 , arch);
        for (i = 0; i < 10; i++)
            printf("v[%d] = %d\n" , i , v[i]);
        fseek(arch , 3 * sizeof(int) , SEEK_SET);
        int valor;
        fread(&valor , sizeof(int) , 1 , arch);
        printf("elemento 4: %d \n" , valor);
        fclose(arch);
    }
    return 0;
}