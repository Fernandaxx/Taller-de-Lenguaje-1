/* Defina la estructura de una lista enlazada de enteros.Implemente las siguientes funciones :
a.Inicializar la lista.
b.Eliminar todos los elementos de la lista.
c.Agregar un elemento al principio de la lista.
d.Agregar un elemento al final de la lista.
e.Calcular la cantidad de elementos de la lista.
f.Imprimir todos los elementos separados por coma. */


#include <stdio.h>
#include <stdlib.h>


typedef struct SNode{ // Nodo de la lista
    int data; // dato del nodo
    struct SNode* next; // puntero al siguiente nodo
}Node;

typedef Node* List; // lista puntero al nodo

void inicializarLista(List*);
void deleteList(List*);
void addFirst(List* , int);
void addLast(List* , int);
int cantElem(List);
void printList(List);

int main(){
    List Lista;
    inicializarLista(&Lista);
    int i;
    for (i = 0; i < 20; i++){
        addFirst(&Lista , i);
    }
    printList(Lista);

    printf("cantidad de elementos: %d \n" , cantElem(Lista));

    for (i = 20; i > 0; i--){
        addLast(&Lista , i);
    }
    printList(Lista);

    deleteList(&Lista);
    return 0;
}


void inicializarLista(List* Lista){
    *Lista = NULL;
}

void deleteList(List* Lista){
    List aux;
    while ((*Lista) != NULL){
        aux = *Lista;
        (*Lista) = (*Lista)->next;
        free(aux);
    }
    *Lista = NULL;
}

void addFirst(List* Lista , int data){
    List NewNode = (List) malloc(sizeof(Node));
    NewNode->data = data;
    NewNode->next = *Lista;
    *Lista = NewNode;
}

void addLast(List* Lista , int data){
    List NewNode = (List) malloc(sizeof(Node));
    List ultimo = *Lista;
    NewNode->data = data;
    NewNode->next = NULL;

    if (*Lista == NULL){
        *Lista = NewNode;
        return;
    }
    while (ultimo->next != NULL){
        ultimo = ultimo->next;
    }
    ultimo->next = NewNode;
}

int cantElem(List Lista){
    int cant = 0;
    while (Lista != NULL){
        cant++;
        Lista = Lista->next;
    }
    return cant;
}

void printList(List lista){
    List actual = lista;
    while (actual != NULL){
        printf("%d" , actual->data);
        if (actual->next != NULL){
            printf(", ");
        }
        actual = actual->next;
    }
    printf("\n");
}