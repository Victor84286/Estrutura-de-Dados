#include <stdio.h>

int main(){
    int A[4][3];
    int numMa;

    printf("Escreva a Matriz\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            scanf("%d", &A[i][j]);
            if(i==0&&j==0)
                numMa = A[0][0];
            else if(numMa<A[i][j])
                numMa = A[i][j];
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            A[i][j] *= numMa;
        }
    }

    printf("Resposta = \n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}