#include <stdio.h>
#include <string.h>

typedef char texto[50];

struct reg_produto{
    int codigo;
    texto nome;
    float preco;
    int quantidade;
};

int main(){
    struct reg_produto prod[5];
   
    for(int i = 0; i<5; i++){
        prod[i].codigo = i+1;
        printf("Escreva o nome do produto\n");
        scanf("%s", &prod[i].nome);
        printf("Escreva o preco do produto\n");
        scanf("%f", &prod[i].preco);
        printf("Escreva a quantidade de produtos que possui\n");
        scanf("%d", &prod[i].quantidade);
        printf("%d", prod[i].quantidade);
    }

    for(int i = 0; i<5;i++){
        printf("Codigo: %d || Nome: %s || Preco: %f || Quantidade: %d\n", prod[i].codigo, prod[i].nome, prod[i].preco, prod[i].quantidade);
    }
}