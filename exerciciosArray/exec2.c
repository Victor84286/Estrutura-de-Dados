#include <stdio.h>
#include <string.h>

int main(){

    int retirador;
    char palavra[20];

    printf("Escreva a palavra\n");
    scanf("%[^\n]s", &palavra);
    printf("Escreva a posicao que deseja retirar\n");
    scanf("%d", &retirador);

    for(int i = retirador; i<strlen(palavra); i++){
        palavra[i] = palavra[i+1];
    }
    
    palavra[strlen(palavra)] = '\0';
    printf("\n%s", palavra);
    return 0;
}