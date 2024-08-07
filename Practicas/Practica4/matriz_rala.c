#include <stdio.h>
#include <stdlib.h>

// Estructura para los nodos de la lista enlazada de índices de columna y valores
typedef struct _NodoColValor {
    int columna;
    double valor;
    struct _NodoColValor* siguiente;
} NodoColValor;

// Estructura para los nodos de la lista enlazada de índices de fila
typedef struct _NodoFila {
    int fila;
    NodoColValor* valores;
    struct _NodoFila* siguiente;
} NodoFila;

// Estructura para la matriz rala
typedef struct {
    int valor_defecto;
    int cant_filas;
    int cant_cols;
    NodoFila* filas;
} MatrizRala;

// Función para crear una matriz rala
void matriz_crear(MatrizRala* matriz, int valor_ini, int filas, int cols) {
    matriz->valor_defecto = valor_ini;
    matriz->cant_filas = cant_filas;
    matriz->cant_cols = cant_cols;
    matriz->filas = NULL;
}

// Función para destruir una matriz rala y liberar memoria
void matriz_destruir(MatrizRala* matriz) {
    NodoFila* tempFila;
    NodoColValor* tempColValor;

    while (matriz->filas != NULL) {
        tempFila = matriz->filas;
        matriz->filas = matriz->filas->siguiente;

        while (tempFila->valores != NULL) {
            tempColValor = tempFila->valores;
            tempFila->valores = tempFila->valores->siguiente;
            free(tempColValor);
        }

        free(tempFila);
    }
}

// Función para obtener el elemento en una posición específica de la matriz rala
int matriz_ver_elemento(MatrizRala* matriz, int fila, int col) {
    NodoFila* tempFila = matriz->filas;
    while (tempFila != NULL && tempFila->fila < fila) {
        tempFila = tempFila->siguiente;
    }

    if (tempFila != NULL && tempFila->fila == fila) {
        NodoColValor* tempColValor = tempFila->valores;
        while (tempColValor != NULL && tempColValor->columna < col) {
            tempColValor = tempColValor->siguiente;
        }

        if (tempColValor != NULL && tempColValor->columna == col) {
            return tempColValor->valor;
        }
    }

    return matriz->valor_defecto;
}

// Función para modificar un elemento en una posición específica de la matriz rala
void matriz_modificar_elemento(MatrizRala* matriz, int fila, int col, double valor) {
    NodoFila* tempFila = matriz->filas;
    NodoFila* prevFila = NULL;

    // Buscar la fila
    while (tempFila != NULL && tempFila->fila < fila) {
        prevFila = tempFila;
        tempFila = tempFila->siguiente;
    }

    // Si no se encuentra la fila, se debe crear
    if (tempFila == NULL || tempFila->fila != fila) {
        NodoFila* nuevaFila = (NodoFila*)malloc(sizeof(NodoFila));
        nuevaFila->fila = fila;
        nuevaFila->valores = NULL;
        nuevaFila->siguiente = tempFila;

        // Actualizar la referencia de la fila anterior o la cabeza de la lista
        if (prevFila != NULL) {
            prevFila->siguiente = nuevaFila;
        } else {
            matriz->filas = nuevaFila;
        }

        tempFila = nuevaFila;
    }

    // Buscar o insertar el valor en la columna correspondiente
    NodoColValor* tempColValor = tempFila->valores;
    NodoColValor* prevColValor = NULL;

    while (tempColValor != NULL && tempColValor->columna < col) {
        prevColValor = tempColValor;
        tempColValor = tempColValor->siguiente;
    }

    // Si el valor ya existe, se actualiza
    if (tempColValor != NULL && tempColValor->columna == col) {
        tempColValor->valor = valor;
    } else { // Si no existe, se inserta
        NodoColValor* nuevoColValor = (NodoColValor*)malloc(sizeof(NodoColValor));
        nuevoColValor->columna = col;
        nuevoColValor->valor = valor;
        nuevoColValor->siguiente = tempColValor;

        // Actualizar la referencia del valor anterior o la cabeza de la lista
        if (prevColValor != NULL) {
            prevColValor->siguiente = nuevoColValor;
        } else {
            tempFila->valores = nuevoColValor;
        }
    }
}

// Función para imprimir la matriz rala
void matriz_imprimir(MatrizRala* matriz) {
    for (int i = 0; i < matriz->cant_filas; i++) {
        for (int j = 0; j < matriz->cant_cols; j++) {
            printf("%d ", matriz_ver_elemento(matriz, i, j));
        }
        printf("\n");
    }
}

int main() {
    // Ejemplo de uso
    MatrizRala matriz;
    matriz_crear(&matriz, 0, 10, 10);

    // Modificar elementos de ejemplo
    matriz_modificar_elemento(&matriz, 1, 2, 1.2);
    matriz_modificar_elemento(&matriz, 2, 3, 2.3);
    matriz_modificar_elemento(&matriz, 3, 4, 3.4);

    // Imprimir la matriz rala
    printf("Matriz Rala:\n");
    matriz_imprimir(&matriz);

    // Destruir la matriz y liberar memoria
    matriz_destruir(&matriz);

    return 0;
}
