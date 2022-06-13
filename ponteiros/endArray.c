#include <stdio.h>

void pos(float a[]){
    int end;
    for(int i = 0; i<10; i++){
        end = &a[i];
        printf("O endereco da casa %d do array eh: %d\n", i, end);
    }
}

int main(){
    float A[10];
    for(int i = 0; i<10; i++){
        scanf("%p", &A[i]);
    }
    pos(A);
    return 0;
}