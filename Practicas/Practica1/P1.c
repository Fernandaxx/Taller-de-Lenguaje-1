/* Al compilar un programa en C, el compilador puede notificar errores y avisos (warnings). ¿Qué
diferencia existe entre ellos? ¿puede un programa compilar con errores? ¿y con warnings?
Compile los siguientes programas e identifique errores y warnings. Luego, corríjalos para que el
código compile correctamente*/

/*  A original
#include <stdio.h>
int main(){
    double pi= 3.14;
    int y= 5
    printf("pi= %d\n", pi);
    }

B original
#include <stdio.h>
int main(){
    int x=10;
    if (x=5)
        printf("x = 5\n");
    return 0;
} } */

/*
// a  warning y var sin usar
#include <stdio.h>
int main()
{
    double pi = 3.14;
    int y = 5;              // falta ;
    printf("pi= %f\n", pi); // espera un float
    return 0;               // falta return
}

*/

// b no hay warnings
#include <stdio.h>
int main()
{
    int x = 10;
    if (x == 5) // se cambia = por == para comparar
        printf("x = 5\n");
    return 0;
}

// Los errores impiden la compilación, mientras que los warnings no.