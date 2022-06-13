#include <stdio.h>

typedef struct reg_no{
    int value;
    struct reg_no * prox;
}no;

int main(){
    no *lista;
    int valor;

    no *novo_no = (no *)malloc(sizeof(no));
    novo_no->value = 10;
    novo_no->prox = NULL;

    lista = novo_no;
/*
    printf("\nvalor da lista: %d", lista->value);
    printf("\nvalor do no: %d", novo_no->value);
*/
    no *novo_no2 = (no *)malloc(sizeof(no));
    novo_no2->value = 5;
    novo_no2->prox = NULL;

    lista->prox = novo_no2;
/*
    printf("\nsegundo valor da lista: %d", lista->prox->value);
    printf("\nvalor do no: %d", novo_no2->value);
*/
    no *novo_no3 = (no *)malloc(sizeof(no));
    novo_no3->value = 6;
    novo_no3->prox = NULL;

    lista->prox->prox = novo_no3;
/*
    printf("\nsegundo valor da lista: %d", lista->prox->prox->value);
    printf("\nvalor do no: %d", novo_no3->value);
*/
    no *novo_no4 = (no *)malloc(sizeof(no));
    novo_no4->value = 8;
    novo_no4->prox = NULL;
    
    lista->prox->prox->prox = novo_no4;
    
    no *aux = lista;
    if(!lista==NULL){
        printf("Valor da lista: %d\n", lista->value);
        while(aux->prox != NULL){
            aux = aux->prox;
            printf("Valor da lista: %d\n", aux->value);
        }
    }

    return 0;
}