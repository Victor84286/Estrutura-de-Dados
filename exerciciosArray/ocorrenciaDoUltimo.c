#include <stdio.h>

int main(){

    int num[10];
    int contador = 0;

    for(int i = 0; i<10; i++){
        printf("Escreva o numero\n");
        scanf("%d", &num[i]);
    }
    for(int i = 0; i<=9; i++){
        if(num[i] == num[9]){
            contador++;
        }
    }
    printf("O numero de vezes que %d aparece eh: %d", num[9], contador);
}