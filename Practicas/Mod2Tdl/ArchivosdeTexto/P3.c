#include <stdio.h>

int main(){
    FILE* arch;
    arch = fopen("precipitaciones.txt" , "r");

    if (arch == NULL)
        printf("error al abrir");
    else{
        int i;
        int Precip_dia;
        int max = 0;
        int dia;
        for (i = 1; i < 31; i++){
            fscanf(arch , "%d-" , &Precip_dia);
            if (Precip_dia > max){
                max = Precip_dia;
                dia = i;
            }
        }
        printf("dia de mas precitpitacion %d , lluvia %d" , dia , max);
        fclose(arch);
    }
    return 0;
}