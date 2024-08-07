/* Utilizando la estructura y funciones del ejercicio anterior escriba un programa que lea números
enteros positivos desde teclado hasta ingresar el número 0. Los números leídos deben ser almacenados
en orden ingresado por teclado.Generar una nueva lista con el orden invertido.Imprimir los
elementos de cada lista junto con la cantidad de elementos de cada una.Por último , libere la memoria
reservada dinámicamente. */

#include <stdio.h>
#include <stdlib.h>

typedef struct SNode{
    int data;
    struct SNode* next;
}Node;

typedef Node* List;


void addLast(List* , int);
void invertir(List , List*);
void printList(List);
void addFirst(List* , int);

int main(){
    List lista = NULL;
    List invLista = NULL;
    int n;
    printf("Ingrese un numero: \n");
    scanf("%d" , &n);
    while (n != 0){
        addLast(&lista , n);
        printf("Ingrese un numero: \n");
        scanf("%d" , &n);
    }
    printList(lista);
    invertir(lista , &invLista);
    printList(invLista);

    return 0;
}

void addLast(List* lista , int dato){
    List newNode = (List) malloc(sizeof(Node));
    List ultimo = *lista;

    newNode->data = dato;
    newNode->next = NULL;

    if (*lista == NULL){
        (*lista) = newNode;
        return;
    }

    while (ultimo->next != NULL){
        ultimo = ultimo->next;
    }
    ultimo->next = newNode;
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

void addFirst(List* lista , int dato){
    List newNode = (List) malloc(sizeof(Node));
    newNode->data = dato;
    newNode->next = *lista;
    *lista = newNode;

}
void invertir(List lista , List* invLista){
    List aux = lista;
    while (aux != NULL){
        addFirst(&(*invLista) , aux->data);
        aux = aux->next;
    }
}
