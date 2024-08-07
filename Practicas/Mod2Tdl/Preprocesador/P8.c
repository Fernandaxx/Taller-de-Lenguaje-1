#include <stdio.h>
#include <stdlib.h>
#define DEBUG 0
int main(){
    int x = 15;
    while (x < 50){
#if DEBUG
        printf("x= %d" , x);
        y = y + 1;
#endif
        x++;
    }
    return 0;
}

//compila cuando Debug = 0 ya que no entra en la condicional #if donde esta la vaiable "y"
// que no esta definida
//ifdef no modifica el resultado, solo indica si DEBUG esta definida 

