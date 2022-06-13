#include <stdio.h>

int main(){

    int tamanho = 5, retirador;
    int num[30];

    printf("Escreva os numros que quer no array\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &num[i]);
    }

    printf("Escreva a posicao que quer retirar\n");
    scanf("%d", &retirador);

    for (int i = 0; i < tamanho; i++){
        if(i>=retirador){
            num[i] = num[i+1];
        }
    }

    for (int i = 0; i < tamanho-1; i++){
        printf("%d", num[i]);
        if(i<tamanho-2)
            printf(", ");
    }
    return 0;
}