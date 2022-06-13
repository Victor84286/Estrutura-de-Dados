#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no{
    float info;
    struct reg_no *prox;
    int cont;
}no;

void inicia_lista(no *lista){
    lista = NULL;
}

int esta_vazia(no *lista){
    if(lista->prox == NULL)
        return 1;
    else
        return 0;
}

no *cria_no(float valor, int cont){
    no *novo_no = (no *)
        malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->cont = cont;
    novo_no->prox = NULL;
    printf("Valor inserido do nohno cria noh: %f\n", novo_no->info);
    return novo_no;
}

void insere_no_fim(no *lista, float valor, int cont){
    no *novo_no = cria_no(valor, cont);
    if(esta_vazia(lista)){
        printf("lista vazia\n");
        lista->prox = novo_no;
        no *aux = lista->prox;
        printf("valor do primeiro item da lista vazia no insere fim depois da incricao: %f\n", aux->info);
    }
    else{
        printf("lista cheia\n");
        no *no_atual = lista->prox;
        while(no_atual->prox != NULL){
            no_atual = no_atual->prox;
        }
        no_atual->prox = novo_no;
        no *aux = no_atual->prox;
        printf("valor do item da lista cheia inserido no insere depois da insercao: %f\n", aux->info);
    }
}

void libera_lista(no *lista){
    no *no_atual, *prox_no;
    no_atual = lista->prox;
    if(!esta_vazia(lista)){
        while(no_atual != NULL){
            prox_no = no_atual->prox;
            free(no_atual);
            no_atual = prox_no;
        }
    }
}

//void busca(no *lista, int cont);

int main(){
    no *lista = (no *)
        malloc(sizeof(no));
    float Float;
    inicia_lista(lista);
    for(int i = 0; i<5; i++){
        printf("Escreva o numero do objeto %d da lista\n", i);
        scanf("%f", &Float);
        insere_no_fim(lista, Float, i);
    }
    printf("%f", lista->info);
}