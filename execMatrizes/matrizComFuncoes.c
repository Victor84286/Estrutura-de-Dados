#include <stdio.h>

void ler_matrizes(int lin, int col, A[lin][col]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j< 3; j++){
            scanf("%d", &A[i][j]);
        }
    }
}

int somaAcima(int A[][], int lin, int col){
    int soma = 0;
    for(int i = 0; i<lin; i++){
        for(int j = 0; j<col; j++){
            if(j>=i+1)
                soma += A[i][j];
        }
    }
    return soma;
}

int somaAbaixo(int A[][], int lin, int col){
    int soma = 0;
    for(int i = 0; i<lin; i++){
        for(int j = 0; j<col; j++){
            if(i>=j+1)
                soma += A[i][j];
        }
    }
    return soma;
}

int main(){
    int lin, col, escolha;
    printf("Escreva a quantidade de linhas\n");
    scanf("%d", &lin);
    printf("Escreva a quantidade de colunas\n");
    scanf("%d", &col);
    int A[lin][col];
    
    ler_matrizes(lin, col, A);

    do{
        printf("Escreva qual soma deseja\n(1 para a soma acima da diagonal principal, 2 para a inferior e 9 para parar)\n");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                printf("A soma superior eh: %d", somaAcima(A[][], lin, col));
                break;
            case 2:
                printf("A soma inferior eh: %d", somaAbaixo(A[][], lin, col));
                break;
            case 9:
                printf("O programa foi encerrado");
                break;
            default:
                printf("Nao identificado");
        }

    }while(escolha !=9);
}