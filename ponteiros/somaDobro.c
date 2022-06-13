#include <stdio.h>

int soma(int *x, int *y){
    int soma = 0;
    *x = *x*2;
    *y = *y*2;
    soma = *x + *y;
    return soma;
}

int main(){
    int n1, n2;
    scanf("%D%D", &n1, &n2);
    printf("A soma do dobro eh: %d", soma(&n1, &n2));
}