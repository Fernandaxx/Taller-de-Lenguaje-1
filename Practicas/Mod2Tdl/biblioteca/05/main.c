#include <stdio.h>
#include "icono_rgb.h"

int main(){
    int n = 10;
    IconoRGB icon = reservar(n);
    liberar(icon , n);
    return 0;
}