#include <stdio.h>

typedef char texto[50];

typedef struct endereco{
    texto logradouro;
    int numero;
    texto bairro;
    texto cidade;
    texto estado;
}ende;

typedef struct pessoa{
    texto name;
    texto cpf;
}pessoa;

typedef struct reg_produto{
    int codigo;
    texto nome;
    float preco;
    int quantidade;
}reg_prod;

struct loja{
    reg_prod prod[3];
    pessoa dono;
    ende end;
    texto nome;
};

int main(){
    struct loja loja[2];

    for(int i = 0; i<2; i++){
        //loja[i];
        printf("Escreva o nome da loja %d \n", i+1);
        scanf("%s", &loja[i].nome);
        printf("Escreva o nome do dono da loja %s\n", loja[i].nome);
        scanf("%s", &loja[i].dono.name);
        printf("Escreva o cpf do dono da loja %s\n", loja[i].nome);
        scanf("%s", &loja[i].dono.cpf);
        
        for(int j = 0; j<3; j++){
            printf("Escreva o nome do produto %d\n", j+1);
            scanf("%s", &loja[i].prod[j].nome);
            printf("Escreva o preco do produto %d\n", j+1);
            scanf("%f", &loja[i].prod[j].preco);
            printf("Escreva a quantidade do produto %d\n", j+1);
            scanf("%d", &loja[i].prod[j].quantidade);
            loja[i].prod[j].codigo = j+1;
        }
        printf("Escreva o logradouro da loja\n");
        scanf("%s", &loja[i].end.logradouro);
        printf("Escreva o numero do endereco da loja\n");
        scanf("%d", &loja[i].end.numero);
        printf("Escreva o bairro em que a loja esta localizada\n");
        scanf("%s", &loja[i].end.bairro);
        printf("Escreva a cidade onde a loja esta localizada\n");
        scanf("%s", &loja[i].end.cidade);
        printf("Escreva o estado onde a loja esta localizada\n");
        scanf("%s", &loja[i].end.estado);
    }
    for(int i  = 0; i<2; i++){
        printf("Os componentes da loja %s sao:\n", loja[i].nome);
        printf("Dono: %s cpf: %s\n", loja[i].dono.name, loja[i].dono.cpf);
        printf("Esta localizado na rua %s, %d\n", loja[i].end.logradouro, loja[i].end.numero);
        printf("No bairro: %s cidade: %s estado: %s\n", loja[i].end.bairro, loja[i].end.cidade, loja[i].end.estado);
        printf("Seus produtos sao:\n");
        for(int j =0; j<3; j++){
            printf("\nProduto de codigo %d\n", loja[i].prod[j].codigo);
            printf("nome: %s", loja[i].prod[j].nome);
            printf("preco: %f Quantidade: %d\n", loja[i].prod[j].preco, loja[i].prod[j].quantidade);
        }
        printf("\n\n\n");
    }

}