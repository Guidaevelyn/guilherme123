#include <stdio.h>
#define BRANCO 2
#define PRETO 1
#define VERMELHO 3


int main(){
    int cor[10], i,pos,vrm;

    printf("o numero das cores são: 1-preto, 2-branco, 3-vermelho");
    for(i=0 ; i <10; i++){
        scanf("%i", &cor[i]);
        if(cor[i] == 3){
            vrm = i;
        }
    }
    for(i=0;i<10;i++){
        if(vrm%2==0){
            
        }
    }
}