#include <stdio.h>
#include <stdlib.h>
#include <strings.h> // memmove

// Definicion de la estructura de la lista
typedef struct {
    int *elementos;   // puntero para almacenar los elementos
    int cantidad;     // dimension logica
    int capacidad;    // dimension fisica
    int crecimiento;  // cantidad de elementos para crecer la lista
} Lista;

// Inicializar la lista
void lista_inicializar(Lista *lista, int crecimiento) {
    lista->elementos = NULL;  // inicialmente no hay elementos
    lista->cantidad = 0;      // cantidad inicial de elementos
    lista->capacidad = 0;     // capacidad inicial
    lista->crecimiento = crecimiento;  // cantidad de elementos para crecer la lista
}

// Agregar un elemento al principio de la lista
void lista_agregar_adelantev1(Lista *lista, int nuevoDato) {
    // Verificar si la capacidad actual es suficiente
    if (lista->cantidad >= lista->capacidad) {
        // Si no es suficiente, aumentar la capacidad
        lista->capacidad += lista->crecimiento;
        lista->elementos = realloc(lista->elementos, lista->capacidad * sizeof(int));
        if (lista->elementos == NULL) {
            printf("Error: No se pudo asignar memoria\n");
            exit(EXIT_FAILURE);
        }
    }

    // Desplazar los elementos hacia la derecha para hacer espacio para el nuevo dato
    for (int i = lista->cantidad; i > 0; i--) {
        lista->elementos[i] = lista->elementos[i - 1];
    }

    lista->elementos[0] = nuevoDato;
    lista->cantidad++;
}


// Agregar un elemento al principio de la lista
void lista_agregar_adelantev2(Lista *lista, int nuevoDato) {
    int *elementos;
    // Verificar si la capacidad actual es suficiente
    if (lista->cantidad >= lista->capacidad) {
        lista->capacidad += lista->crecimiento;
        elementos = (int*) malloc((lista->capacidad) * sizeof(int));
    } else {
        elementos = lista->elementos;
    }

    // Copia segura de lista->elementos en elementos -1. memcpy no lo hace
    memmove(elementos + 1, lista->elementos, lista->cantidad * sizeof(int));
    elementos[0] = nuevoDato; // Agregar el nuevo dato al principio
    lista->cantidad++;

    if (lista->elementos != elementos){
        free(lista->elementos);
        lista->elementos = elementos;
    }

}


// Agregar un elemento a la lista
void lista_agregar_al_final(Lista *lista, int nuevoDato) {
    // Verificar si la capacidad actual es suficiente
    if (lista->cantidad >= lista->capacidad) {
        // Si no es suficiente, aumentar la capacidad
        lista->capacidad += lista->crecimiento;
        lista->elementos = realloc(lista->elementos, lista->capacidad * sizeof(int));
    }

    // Agregar el nuevo dato
    lista->elementos[lista->cantidad] = nuevoDato;
    lista->cantidad++;
}

// Obtener el elemento i-esimo de la lista
int lista_elemento(Lista lista, int indice) {
    if (indice < 0 || indice >= lista.cantidad) {
        printf("Error: Índice fuera de rango\n");
        exit(EXIT_FAILURE);
    }
    return lista.elementos[indice];
}

// Calcular la cantidad de elementos de la lista
int lista_contar(Lista lista) {
    return lista.cantidad;
}

// Imprimir todos los elementos de la lista separados por coma
void lista_imprimir(Lista lista) {
    for (int i = 0; i < lista.cantidad; i++) {
        printf("%d", lista.elementos[i]);
        if (i < lista.cantidad - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

// Eliminar la lista y liberar memoria
void lista_limpiar(Lista *lista) {
    free(lista->elementos);
    lista->elementos = NULL;
    lista->cantidad = 0;
    lista->capacidad = 0;
}

// Funcion principal
int main() {
    Lista lista;
    lista_inicializar(&lista, 2);

    lista_agregar_adelantev2(&lista, 3);
    lista_agregar_adelantev2(&lista, 2);
    lista_agregar_adelantev2(&lista, 1);

    printf("Lista agregado adelante 3,2,1: ");
    lista_imprimir(lista);
    // Imprime 1,2,3

    lista_agregar_al_final(&lista, 4);
    lista_agregar_al_final(&lista, 5);

    printf("Elemento en posicion 3: %d\n", lista_elemento(lista, 3));

    printf("Lista agregado al final 4, 5: ");
    lista_imprimir(lista);
    // Imprime 1,2,3,4,5

    printf("Elementos en la lista: %d\n", lista_contar(lista));
    // Imprime 5

    lista_limpiar(&lista);

    printf("Elementos en la lista \"limpia\": %d\n", lista_contar(lista));
    // Imprime 0

    return 0;
}
