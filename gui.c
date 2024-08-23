#include <stdio.h>
int main(){
  int alt,esp,nesp = 1, emoji=1, nemoji=1,meio,linha = 0;
  printf("digite um numero maior que 3 e impar:");
  scanf("%i",&alt);
  esp=alt/2;
  for(linha = 0;linha <= alt; ){
    if(nesp<=esp){
      printf("a");
      nesp++;
    }
    if(nesp == esp +1 && nemoji <= emoji){
      printf("😃");
      nesp=1;
      nemoji++;
      linha++;
      
    }
    if(linha== nemoji){
      printf("\n");
      linha = 0;
      emoji = emoji + 2;
      nemoji = 1;
      esp --;
    }
  }
}