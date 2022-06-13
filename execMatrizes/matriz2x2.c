#include <stdio.h>

int main(){
    int matriz[2][2];
    int proddir = 1, prodind = 1;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            if(i == j)
            proddir *= matriz[i][j];
            else
            prodind *= matriz[i][j];
        }
    }

    printf("%d", proddir-prodind);
}