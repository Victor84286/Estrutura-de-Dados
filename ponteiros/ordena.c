#include <stdio.h>

void troca(int *x, int *y){
    int aux;
    if(*y>*x){
        aux = *y;
        *y = *x;
        *x = aux;
    }
}

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    troca(&n1, &n2);
    printf("Os numeros ordenados sao: %d e %d", n1, n2);
}