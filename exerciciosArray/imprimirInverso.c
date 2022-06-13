#include <stdio.h>
#include <string.h>

int main(){
    char nome[100], nomeinv[100];

    scanf("%s", &nome);

    nomeinv[strlen(nome)] = '\0';

    for(int i = 0, j = strlen(nome)-1; i< strlen(nome); i++, j--){
        nomeinv[i] = nome[j];
    }
    nomeinv[strlen(nome)] = '\0';
    printf("%s\n", nome);
    printf("%s\n", nomeinv);

    return 0;
}