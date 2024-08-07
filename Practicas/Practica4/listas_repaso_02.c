#include <stdio.h>
#include <stdlib.h>

// Definicion de la estructura de un nodo de la lista enlazada
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

typedef struct Nodo* ListaPtr;

// Definicion de la estructura de la lista enlazada
typedef struct {
    ListaPtr primero; // puntero al primero
    ListaPtr ultimo;  // puntero al ultimo
    int cantidad;     // cantidad de elemntos
} Lista;


// Inicializar la lista
void lista_inicializar(Lista* lista) {
    lista->primero = NULL; // puntero al primero
    lista->ultimo = NULL;  // puntero al ultimo
    lista->cantidad = 0;   // cantidad de elementos
}

// Eliminar todos los elementos de la lista
void lista_limpiar(Lista* lista) {
    ListaPtr actual = lista->primero;
    ListaPtr siguiente;

    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }

    lista->primero = NULL;
    lista->ultimo = NULL;
    lista->cantidad = 0;
}

// Agregar un elemento al principio de la lista
void lista_agregar_adelante(Lista* lista, int nuevoDato) {
    ListaPtr nuevo = (ListaPtr)malloc(sizeof(struct Nodo));
    nuevo->dato = nuevoDato;
    nuevo->siguiente = lista->primero;
    lista->primero = nuevo;

    if (lista->ultimo == NULL) {
        lista->ultimo = nuevo;
    }

    lista->cantidad++;
}

// Agregar un elemento al final de la lista
void lista_agregar_al_final(Lista* lista, int nuevoDato) {
    ListaPtr nuevo = (ListaPtr)malloc(sizeof(struct Nodo));
    nuevo->dato = nuevoDato;
    nuevo->siguiente = NULL;

    if (lista->ultimo == NULL) {
        lista->primero = nuevo;
    } else {
        lista->ultimo->siguiente = nuevo;
    }

    lista->ultimo = nuevo;
    lista->cantidad++;
}

// Obtener el elemento i-ésimo de la lista
int lista_elemento(Lista lista, int indice) {
    if (indice < 0 || indice >= lista.cantidad) {
        printf("Error: Índice fuera de rango\n");
        return -1;
    }

    ListaPtr actual = lista.primero;
    int contador = 0;

    while (contador < indice) {
        actual = actual->siguiente;
        contador++;
    }

    return actual->dato;
}

// Calcular la cantidad de elementos de la lista
int lista_contar(Lista lista) {
    return lista.cantidad;
}

// Imprimir todos los elementos de la lista separados por coma
void lista_imprimir(Lista lista) {
    ListaPtr actual = lista.primero;

    while (actual != NULL) {
        printf("%d", actual->dato);
        if (actual->siguiente != NULL) {
            printf(", ");
        }
        actual = actual->siguiente;
    }
    printf("\n");
}

// Funcion principal
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
