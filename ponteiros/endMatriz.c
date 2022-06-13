#include <stdio.h>

void matriz(float M[3][3]){
    int end;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            end = &M[i][j];
            printf("%d ", end);
        }
        printf("\n");
    }
}

int main(){
    float A[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%f", &A[i][j]);
        }
    }
    matriz(A);
    return 0;
}