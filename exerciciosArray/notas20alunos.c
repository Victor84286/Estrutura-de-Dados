#include <stdio.h>

int main(){

    int num[20];
    int numAux;
    int numInv[20];
    
    num[20] = 0;
    numInv[20] = 0;

    for(int i = 0; i<=19; i++){
        printf("Escreva o numero\n");
        scanf("%d", &num[i]);
    }

    for(int i = 0, j = 19; i<=19, j>=0; i++, j--){
        numAux = num[i];
        numInv[j] = numAux;
    }

    printf("\n");

    for(int j = 0; j<=19; j++){
        printf("%d, ", numInv[j]);
    }
    return 0;
}