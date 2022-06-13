#include <stdio.h>

void comparar(int *x, int *y, int *resp){
    if(*x>=*y)
        *resp = *x;
    if(*y>*x)
        *resp = *y;
}

int main(){
    int n1, n2, resp;

    scanf("%D%D", &n1, &n2);
    comparar(&n1, &n2, &resp);
    printf("O maior eh: %d", resp);
    return 0;
}