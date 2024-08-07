#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo de la lista enlazada
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

typedef struct Nodo* Lista;

// Función para inicializar la lista
void lista_inicializar(Lista* lista) {
    *lista = NULL;
}

// Función para eliminar todos los elementos de la lista
void lista_limpiar(Lista* lista) {
    Lista actual = *lista;
    Lista siguiente;

    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }

    *lista = NULL;
}

// Función para agregar un elemento al principio de la lista
void lista_agregar_adelante(Lista* lista, int nuevoDato) {
    Lista nuevo = (Lista)malloc(sizeof(struct Nodo));
    nuevo->dato = nuevoDato;
    nuevo->siguiente = *lista;
    *lista = nuevo;
}

// Función para agregar un elemento al final de la lista
void lista_agregar_al_final(Lista* lista, int nuevoDato) {
    Lista nuevo = (Lista)malloc(sizeof(struct Nodo));
    Lista ultimo = *lista;

    nuevo->dato = nuevoDato;
    nuevo->siguiente = NULL;

    if (*lista == NULL) {
        *lista = nuevo;
        return;
    }

    while (ultimo->siguiente != NULL) {
        ultimo = ultimo->siguiente;
    }

    ultimo->siguiente = nuevo;
}

// Función para calcular la cantidad de elementos de la lista
int lista_contar(Lista lista) {
    int contador = 0;
    Lista actual = lista;

    while (actual != NULL) {
        contador++;
        actual = actual->siguiente;
    }

    return contador;
}

// Función para imprimir todos los elementos de la lista separados por coma
void lista_imprimir(Lista lista) {
    Lista actual = lista;

    while (actual != NULL) {
        printf("%d", actual->dato);
        if (actual->siguiente != NULL) {
            printf(", ");
        }
        actual = actual->siguiente;
    }
    printf("\n");
}

// Función para obtener el elemento i-ésimo de la lista
int lista_elemento(Lista lista, int indice) {
    int contador = 0;
    Lista actual = lista;

    while (actual != NULL) {
        if (contador == indice) {
            return actual->dato;
        }
        contador++;
        actual = actual->siguiente;
    }

    // Si el índice está fuera de rango, se retorna -1
    return -1;
}
// Función principal
int main() {
    Lista lista;
    lista_inicializar(&lista);

    lista_agregar_adelante(&lista, 3);
    lista_agregar_adelante(&lista, 2);
    lista_agregar_adelante(&lista, 1);

    printf("Lista agegado adelante 3,2,1: ");
    lista_imprimir(lista);
    // Imprime 1,2,3

    lista_agregar_al_final(&lista, 4);
    lista_agregar_al_final(&lista, 5);

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
