#include <stdio.h>
#define BUCLE 0
#define DEBUG 1
int main(){
    int i , x = 0;
#ifdef BUCLE
    while (x < 5000){
        for (i = 0; i < 100; i++){
            x += 1;
#if DEBUG
            printf("X = % d\n" , x);
#endif
        }
    }
#endif
    return 0;
}