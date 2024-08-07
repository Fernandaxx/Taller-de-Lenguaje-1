#include <string.h>
#include <stdio.h>

int palindromoIndices(const char str[]){
    int j = strlen(str) - 1;
    int i = 0;
    while (i < j){
        if (str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}

int palindromoPunteros(const char str[]){
    const char* j = str + strlen(str) - 1;
    const char* i = str;
    while (i < j){
        if (*i != *j) return 0;
        i++; j--;
    }
    return 1;
}

int main(){
    char str1[] = "abcded";
    char str2[] = "abccba";
    char str3[] = "abcba";
    printf("Indices:\n");
    printf("%d\n" , palindromoIndices(str1));
    printf("%d\n" , palindromoIndices(str2));
    printf("%d\n" , palindromoIndices(str3));
    printf("Punteros:\n");
    printf("%d\n" , palindromoPunteros(str1));
    printf("%d\n" , palindromoPunteros(str2));
    printf("%d\n" , palindromoPunteros(str3));
}