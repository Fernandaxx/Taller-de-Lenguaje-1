#include <stdio.h>
#define BUCLE 1
#define DEBUG 0
int main(){
    int i , x = 0;
#ifdef BUCLE
    while (x < 50){
        for (i = 0; i < 10; i++){
            x += 1;
#if DEBUG
            printf("X = % d\n" , x);
#endif

        }

    }
#endif
    return 0;

}