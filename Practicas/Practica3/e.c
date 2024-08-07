#include <stdio.h>
int main(){
    char* p , i = 1 , c = 'I' , s[] = "Malo";
    *(s + 1) = *(&c);
    // s = p;
    p = s + 3;
    *(s + i) = *p;
    p[0] = 'a';
    // scanf("%c" , s[2]);
    *s = --(*&c);
    //&s[2] = p;
    p = &(c - 1);
    printf("%s" , s);
    return 0;
}