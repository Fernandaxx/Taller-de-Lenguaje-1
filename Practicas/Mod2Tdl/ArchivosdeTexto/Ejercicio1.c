#include <stdio.h>
#include <string.h>

int main(){
    FILE* arch;
    arch = fopen("prueba.txt" , "a+");
    if (arch == NULL)
        printf("error");
    else{
        char a[100];

        scanf("%s" , a);
        while (strcmp(a , "fin") != 0){
            fprintf(arch , "%s " , a);
            // fputs(a , arch);
            scanf("%s" , a);
        }
        fseek(arch , 0 , SEEK_END);
        printf("tamano del archivo %u\n" , ftell(arch));
        fclose(arch);
    }
    return 0;
}