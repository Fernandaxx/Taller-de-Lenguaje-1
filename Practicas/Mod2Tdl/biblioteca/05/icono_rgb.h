#ifndef icono_rgb.h
#define icono_rgb.h

struct color{
    unsigned char red;
    unsigned char green;
    int blue;
};
typedef struct color color;
typedef color** IconoRGB;

IconoRGB reservar(int n);
void liberar(IconoRGB , int n);
#endif


