#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 20
#define COL 20

int main(){
    int num[LIN][COL],i,j,aux=2, primo=0;
    srand(time(NULL));

    for(i = 0; i<LIN; i++){
        for(j = 0; j<COL; j++){
            num[i][j] = rand()%9 +1;
            printf("%i ", num[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0 ; i<LIN ; i++){
        for(j=0; j<COL; j++){
            while(aux <= num[i][j]){
                if(num[i][j]%aux==0){
                    primo++;
                }
                aux++;
            }
            aux=2;
            if(primo == 1){
                printf("%i ",num[i][j]);
            }
            else{
                printf("0 ");
            }
            primo=0;
        }
        printf("\n");
    }
}