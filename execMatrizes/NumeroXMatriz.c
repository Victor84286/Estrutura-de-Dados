#include <stdio.h>

int main(){
    int A[4][3], B[4][3];
    int num;

    printf("Escreva o numero multiplicador\n");
    scanf("%d", &num);

    printf("Escreva a Matriz\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            B[i][j] = A[i][j] * num;
        }
    }

    printf("Resposta = \n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}