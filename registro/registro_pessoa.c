#include <stdio.h>
#include <string.h>

typedef char texto[50];

typedef struct endereco{
    texto logradouro;
    int numero;
    texto bairro;
    texto cidade;
    texto estado;
}end;

struct pessoa{
    texto nome[50];
    texto cpf;
    end endereco;
};

int main(){
    struct pessoa pes1;
    printf("Escreva o nome da pessoa\n");
    scanf("%s", &pes1.nome);
    printf("Escreva o cpf da mesma\n");
    scanf("%s", &pes1.cpf);
    printf("Escreva o nome da rua\n");
    scanf("%s", &pes1.endereco.logradouro);
    printf("Escreva o numero da casa\n");
    scanf("%d", &pes1.endereco.numero);
    printf("Escreva o bairro\n");
    scanf("%s", &pes1.endereco.bairro);
    printf("Escreva a cidade\n");
    scanf("%s", &pes1.endereco.cidade);
    printf("Escreva o estado\n");
    scanf("%s", &pes1.endereco.estado);
    
    

    printf("\n\nO nome eh %s\n", pes1.nome);
    printf("O cpf da pessoa eh %s\n", pes1.cpf);
    printf("O logradouro eh %s\n", pes1.endereco.logradouro);
    printf("O numero da casa eh %d\n", pes1.endereco.numero);
    printf("O bairro eh %s\n", pes1.endereco.bairro);
    printf("A cidade eh %s\n", pes1.endereco.cidade);
    printf("O estado eh %s\n", pes1.endereco.estado);
}