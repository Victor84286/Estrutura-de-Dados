#include <stdio.h>
#include <string.h>

int main(){
    char nome1[50];

    scanf("%[^\n]s", &nome1);
    
    printf("A quantidade de caracteres em %s eh: %d\n", nome1, strlen(nome1));

    for( int i =0 ; i<strlen(nome1); i++){
        printf("%c", nome1[i]);
        if(i < strlen(nome1)-1){
            printf("-");
        }
    }
    return 0;
}