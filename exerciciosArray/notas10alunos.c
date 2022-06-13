#include <stdio.h>

int main(void){

    float notas[10], notasaux, soma = 0, media;
    int i = 0, contador =0;

    notas[10] = 0;
    while(i <10){
        printf("escreva a nota do aluno\n");
        scanf("%f", &notasaux);
        if(notasaux == (-1)){
            break;
        }
        else{
            notas[i] = notasaux;
            soma += notasaux;
            contador++;
        }
        i++;
    }
    printf("\n");
    for(int j = (contador - 1); j>=0; j--){
        printf("%.2f, ", notas[j]);
    }

    media = soma/contador;
    printf("\nA soma eh: %f\nA media eh: %f", soma, media);
    return 0;
}