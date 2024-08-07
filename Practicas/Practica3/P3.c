/* 3. Resuelva:
a.Defina una estructura direccion que contenga los siguientes campos : calle(arreglo de 50
caracteres) , ciudad(arreglo de 30 caracteres) , codigo_postal(int) y pais(arreglo de 40
caracteres).
b.Defina una estructura alu que contenga los siguientes campos : apellido(arreglo de 50
caracteres) , nombre(arreglo de 50 caracteres) , legajo(arreglo de 8 caracteres) , promedio
(float) y domicilio(struct direccion).
a.Renombre el tipo struct alu a alumno mediante la palabra clave typedef.
b.Escriba una función que reciba un alumno y lo inicialice a partir de valores ingresados por
teclado.
c.Escriba un programa que defina un arreglo de 30 elementos alumno y lo inicialice utilizando
la función definida en el inciso anterior.Luego , informe el nombre y apellido del alumno que
tiene mejor promedio.
c.Defina la estructura pun3D , la cual representa una posición en el espacio.La misma debe
contener los campos x(float) , y(float) y z(float).Luego:
a.Renombre la estructura pun3D a punto3D utilizando la palabra clave typedef.
b.Imprima en pantalla el tamaño del tipo struct pun3D.¿Cuánto ocupa ? ¿Por qué ?
c.Imprima en pantalla el tamaño del tipo punto3D.¿Cuánto ocupa ? ¿Es igual al de struct
pun3D ? ¿Por qué ?
d.Defina un arreglo de 4 elementos de tipo punto3D e imprima en pantalla el espacio ocupado
por el mismo.¿Cuánto ocupa ? ¿Por qué ?
 */


#include <stdio.h>

struct Direccion{
    char[50] calle;
    char[30] cuidad;
    int codPostal;
    char[40] pais;
};

struct alu{
    char[50] apellido;
    char[50] nombre;
    char[8] legajo;
    float promedio;
    struct Direccion domicilio;
};


void LeerDireccion(struct Direccion* D){
    scanf("%s" , D.->calle);
    scanf("%s" , D.ciudad);
    scanf("%d" , &D->codPostal);
    scanf("%s" , D.pais)
}

void LeerAlumno(struct  alu* a){
    scanf("%s" , (a.apellido));
    scanf("%s" , a.nombre);
    scanf("%s" , a.legajo);
    scanf("%f" , &(a->promedio));
    LeerDireccion(&(a->domicilio));
}



