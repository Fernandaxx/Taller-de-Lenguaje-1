#include <stdio.h>
#define ES_OP(e) ((e) == '+'|| (e) == '-' || (e) == '*' || (e) == '/')
#define DOS_OP(a,b,c) ((ES_OP(a) + ES_OP(b) + ES_OP(c)) >= 2 ? "SI" : "NO")

int main(){
    printf("En el conjunto {0,1,+} %s hay almenos 2 operadores\n" , DOS_OP('0' , '1' , '+'));
    printf("En el conjunto {4,+,/} %s hay almenos 2 operadores\n" , DOS_OP('4' , '+' , '/'));
    return 0;
}