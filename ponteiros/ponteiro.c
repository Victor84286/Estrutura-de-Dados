#include<stdio.h>

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("Os numeros nao trocados sao: %d e %d\n", n1, n2);
    troca (&n1, &n2);
    printf("Os numeros trocados sao: %d e %d", n1, n2);
    return 0;
}