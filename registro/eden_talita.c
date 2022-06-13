#include <stdio.h>

typedef char fruta[20];
typedef char texto[50];

struct pessoa{
    texto nome;
    char sexo[9];

};

struct eden{
    fruta maca;
    struct pessoa inf_pes;
};

int main(){
    struct eden eden;

    printf("Escreva o nome da primeira pessoa\n");
    scanf("%s", &eden.inf_pes.nome);
    printf("Escreva o sexo da primeira pessoa\n");
    scanf("%s", &eden.inf_pes.sexo);
    printf("Esrceva a cor da maca\n");
    scanf("%s", &eden.maca);

    printf("A pessoa %s ", eden.inf_pes.nome);
    if(eden.maca == 'vermelha' || eden.maca == "verde")
        printf("pode comer a maca");
    else
        printf("nao pode comer a maca");
}