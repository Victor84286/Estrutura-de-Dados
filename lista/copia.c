#include <stdio.h>
typedef struct reg_no
{
    float info;          /* Campo para ainformacao */
    struct reg_no *prox; /* Campo p/ o apontador do proximonoh */
} no;

void inicializa_lista(no *lista)
{
    //lista->prox = NULL; /* lista com noh cabeça, ou seja, o primeiro valor em si não importa, o que importa eh o noh */
    lista = NULL;
}
int estah_vazia(no *lista)
{
    if (lista->prox == NULL)
        return 1;
    else
        return 0;
}
no *cria_no(float valor)
{
    no *novo_no = (no *)
        malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;
    printf("valor inserido do nohno cria noh: %f\n", novo_no->info);
    return novo_no;
}
void insere_no_fim(no *lista, float valor)
{
    no *novo_no = cria_no(valor);
    if (estah_vazia(lista))
    {
        printf("lista vazia\n");
        lista->prox = novo_no;
        no *aux = lista->prox;
        printf("valor do primeiro item da lista vazia no insere fim depois da insercao: %f\n", aux->info);
    }
    else
    {
        printf("lista cheia\n");
        no *no_atual = lista->prox;
        while (no_atual->prox != NULL)
        {
            no_atual = no_atual->prox;
        }
        no_atual->prox = novo_no;
        no *aux = no_atual->prox;
        printf("valor do item da lista cheia inserido no insere fim depois da insercao: %f\n", aux->info);
    }
}
void libera_lista(no *lista)
{
    no *no_atual, *prox_no;
    no_atual = lista->prox;
    if (!estah_vazia(lista))
    {
        while (no_atual != NULL)
        {
            prox_no = no_atual->prox;
            free(no_atual);
            no_atual = prox_no;
        }
    }
}
int main()
{
    no *lista = (no *)
        malloc(sizeof(no));
    inicializa_lista(lista);

    insere_no_fim(lista, 10);
    insere_no_fim(lista, 9);
    insere_no_fim(lista, 8);
    no *aux = lista->prox;
    printf("valor do primeiro elemento da lista antes da liberacao eh: %f\n", aux->info);libera_lista(lista);
    printf("valor do primeiro elemento da lista depois da liberacao eh: %f\n", aux->info);

return 0;
}