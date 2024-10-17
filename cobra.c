#include <stdio.h>
#define VERMELHO 3
#define BRANCO 2
#define PRETO 1 
#define VERDADEIRA 1
#define FALSA 2
#define INVALIDO 3


int main(){
    int cobra[10] ,com, result[1000],i,verm2=0,cont=0,erro;
    for(i=0;i<10; i++){
        scanf("%i",&cobra[i]);
    }
    com = cobra[0];
    printf("eae");
    for(i=0;i<10;i++){
        printf("oi");
        if(cobra[i] == VERMELHO && com == VERMELHO && verm2 == 0){
            com = PRETO;
            verm2=1;
            cont=0;
        }
        else if(com == PRETO && cobra[i] == PRETO && cont != 6){
            com++;
            if(com++ == cobra[i++]){
                com=VERMELHO;
            }
            cont++;
        }
        else if(com == BRANCO && cobra[i]== BRANCO && cont != 6){
            com--;
            cont++;
        }
        else if(com == VERMELHO && verm2==1 && cont == 5){
            com= 1;
        }
        else{
            erro = 1;
            printf("deu errado ");
        }
    }
}


/*Por exemplo, se
começarmos pela cor vermelha, temos como sequência padrão: vermelho, preto,
branco, preto, branco, preto e vermelho. Se começarmos pela cor branca, temos:
branco, preto, branco, preto, vermelho, preto e branco. Ou seja, independente da
cor inicial, é possível identificar se trata-se ou não de uma cobra-coral verdadeira.*/