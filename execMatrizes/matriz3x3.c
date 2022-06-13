#include <stdio.h>

int main(){
    int A[5][3];
    int prod = 1, somadir = 0, somaind = 0;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for(int i = 3; i<5; i++){
        for(int j = 0; j<3; j++){
            A[i][j] = A[i-3][j];
        }
    }
    
    for(int k = 0; k<3; k++){
        for(int i = 3; i<5; i++){
            for(int j = 0; j<3; j++){
                if(i-k==j){
                   prod *=  A[i][j];
                   break;
                }
            }
        }
    }

/*
    for(int i = 3; i<5; i++){
        for(int j = 0; j<3; j++){
            if(i==j){
                prod *=  A[i][j];
                break;
            }
        }
    }
    somadir += prod;
    prod = 1;
    for(int i = 3; i<5; i++){
        for(int j = 0; j<3; j++){
            if(i-1==j){
                prod *=  A[i][j];
                break;
            }
        }
    }
    somadir += prod;
    prod = 1;
    for(int i = 3; i<5; i++){
        for(int j = 0; j<3; j++){
            if(i-2==j){
                prod *=  A[i][j];
                break;
            }
        }
    }
    somadir += prod;
*/

    prod = 1;
    for(int i = 4; i>=0; i--){
        for(int j = 0; j<3; j++){
            if((i==4&&j==0)||(i==3&&j==1)||(i==2&&j==2)){
                prod *=  A[i][j];
                break;
            }
        }
    }
    somaind += prod;
    prod = 1;
    for(int i = 4; i>=0; i--){
        for(int j = 0; j<3; j++){
            if((i==3&&j==0)||(i==2&&j==1)||(i==1&&j==2)){
                prod *=  A[i][j];
                break;
            }
        }
    }
    somaind += prod;
    prod = 1;
    for(int i = 4; i>=0; i--){
        for(int j = 0; j<3; j++){
            if((i==2&&j==0)||(i==1&&j==1)||(i==0&&j==2)){
                prod *=  A[i][j];
                break;
            }
        }
    }
    somaind += prod;

    printf("%d", somadir-somaind);
}