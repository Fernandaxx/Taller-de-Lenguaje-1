int potencia(int x , int y){
    if (y == 0)
        return 1;
    for (; y > 1; x *= x , y--)
        ;
    return x;
}

int cubo(int x){ return potencia(x , 3); }

int cuadrado(int x){ return potencia(x , 2); }

int factorial(int i){
    if (i == 0 || i == 1)
        return 1;
    return factorial(i - 1) * i;
}