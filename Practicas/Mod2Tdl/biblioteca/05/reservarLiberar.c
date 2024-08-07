#include "icono_rgb.h"
#include <stdio.h>
#include <stdio.h>

IconoRGB reservar(int n){
    IconoRGB Md;
    Md = (IconoRGB**) malloc(n * sizeof(color*));
    for (int i = 0; i < n; i++){
        Md[i] = (IconoRGB*) malloc(n * sizeof(color));
    }
    return Md;

}

void liberar(IconoRGB icon , int n){
    for (int i = 0; i < n; i++){
        free(icon[i]);
    }
    free(icon);
}