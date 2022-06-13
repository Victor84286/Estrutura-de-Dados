#include <stdio.h>

int main(){

    int definidor, i = 0;
    printf("Escreva o numero de inteiros que ira escrever\n");
    scanf("%d", &definidor);
    int num[definidor];

    while (i<definidor){
        printf("Escreva o inteiro\n");
        scanf("%d", &num[i]);
        i++;
    }
    for(int i = 0; i<definidor; i++){
        printf("%d, ", num[i]);
    }
    for(int i = 0; i<definidor; i++){
        if(i%2== 0){
            num[i] = 2;
        }
        else{
            num[i]= 1;
        }
    }
    printf("\n");
    for(int i = 0; i<definidor; i++){
        printf("%d, ", num[i]);
    }
}