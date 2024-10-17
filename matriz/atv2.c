#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5
#define WHITE printf("\033[0;37m");
#define PURPLE printf("\033[0;35m");
#define CYAN printf("\033[0;36m");

int main(){
    int mat [LIN][COL], linha,lin,col,tamanho = 0;
    srand(time(NULL));

    for(lin = 0 ; lin < LIN ; lin++){
        for(col = 0; col < COL; col++){
            mat[lin][col] = 10 + rand()%41;
            printf("%i ", mat[lin][col]);
            if(lin == col){
                if(tamanho < mat[lin][col]){
                    tamanho = mat[lin][col];
                }
            }
        }
        printf("\n");
    }
    printf("\n");

    for(lin = 0 ; lin < LIN ; lin++){
        for(col = 0; col < COL; col++){
            WHITE
            if(lin == col){
                PURPLE
                if(tamanho == mat[lin][col]){
                CYAN
                }
            }
            printf("%i ", mat[lin][col]);
        }
        WHITE
        printf("\n");
    }
}