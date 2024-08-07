/* Utilizando la estructura y funciones de los ejercicios anteriores escriba un programa que lea números
enteros desde teclado hasta ingresar el número 0. Luego , vuelva a leer otro número entero desde
teclado y elimine de la lista a todos aquellos que sean múltiplos del mismo. */


typedef struct SNode{
    int data;
    struct SNode* next;
}Node;

typedef Node* List;


void addLast(List* , int);
void printList(List);
void addFirst(List* , int);
boolean esMultiplo(int , int);
void deleteMultiplos(List* , int);

int main(){
    List lista = NULL;
    int n;
    printf("Ingrese un numero: \n");
    scanf("%d" , &n);
    while (n != 0){
        addLast(&lista , n);
        printf("Ingrese un numero: \n");
        scanf("%d" , &n);
    }
    printList(lista);


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