#include <stdio.h>

int main(){
    int A[4][4], B[4][4], C[4][4];

    printf("Escreva a Matriz A\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 4; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Escreva a Matriz B\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 4; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j< 4; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matriz C = \n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 4; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}