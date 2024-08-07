#include <stdio.h>

int main(){
    int numeros[6] = {123456,654321,678900,987654,324543,654321};
    FILE* archTexto;
    FILE* archBinario;

    archTexto = fopen("archtex.txt" , "w+");
    if (archTexto == NULL){
        printf("Error al abrir .txt");
    }
    else{
        int i;
        for (i = 0; i < 6; i++){
            fprintf(archTexto , "%d\n" , numeros[i]);
        }
        int valor;
        for (i = 0; i < 3; i++){
            fscanf(archTexto , "%d\n" , &valor);
        }
        printf("tercer valor del arch texto: %d\n" , valor);
        fseek(archTexto , 0 , SEEK_END);
        printf("tamano texto: %u\n" , ftell(archTexto));
        fclose(archTexto);
    }


    archBinario = fopen("archBin" , "wb+");
    if (archBinario = NULL){
        printf("Error al abrir .b");
    }
    else{
        fwrite(numeros , sizeof(int) , 6 , archBinario);
        fseek(archBinario , 0 , SEEK_END);
        printf("tamano texto: %ld\n" , ftell(archBinario));
        int valor;
        fread(&valor , 2 * sizeof(int) , 1 , archBinario);
        printf("tercer elemento del archivo binario %d: " , valor);
        fclose(archBinario);
    }

    return 0;
}