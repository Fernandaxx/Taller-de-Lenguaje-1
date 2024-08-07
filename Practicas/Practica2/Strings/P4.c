/* La función strlen recibe un puntero a una cadena de caracteres y retorna su longitud(sin incluir el
carácter nulo).Implemente su propia versión de la función strlen. */

int strlen(char[] C){
    for (int i = 0; C[i] != '\0'; i++);
    return i;
}