#include <stdio.h>

int main(){
    int num[20];
    int aux;
    
    for(int i = 0; i<=19; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i <=9; i++){
        aux = num[i];
        num[i] = num[20-1-i];
        num[20-1-i] = aux;
    }
    for(int i = 0; i<=19; i++){
        printf("%d, ", num[i]);
    }
    return 0;
}