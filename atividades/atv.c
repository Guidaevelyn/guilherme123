#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fim = 0, jogador = 1, valida, ganhador = 0,final = 0;
    char a, b, c, d, e, f, g, h, i, jogada;
    a = b = c = d = e = f = g = h = i = ' ';
    while (fim == 0)
    {
        //system("clear"); 
        printf("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
        printf("\n🧱🧱🧱🧱🧱🧱  JOGO DA VELHA 🧱🧱🧱🧱🧱🧱");
        printf("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
        printf("\n");
        printf("\n               🇦 🧱🇧 🧱🇨 ");
        printf("\n               🧱🧱🧱🧱🧱   ");
        printf("\n               🇩 🧱🇪 🧱🇫 ");
        printf("\n               🧱🧱🧱🧱🧱   ");
        printf("\n               🇬 🧱🇭 🧱🇮 ");
        printf("\n               ");
        printf("\n               ");
        if(a == ' ') printf("  "); else if(a == 'O') printf("🔴"); else { printf("⚪");}
        printf("🧱");
        if(b == ' ') printf("  "); else if(b == 'O') printf("🔴"); else { printf("⚪");}
        printf("🧱");
         if(c == ' ') printf("  "); else if(c == 'O') printf("🔴"); else { printf("⚪");}
        printf("\n               🧱🧱🧱🧱🧱");
        printf("\n               ");
         if(d == ' ') printf("  "); else if(d == 'O') printf("🔴"); else { printf("⚪");}
        printf("🧱");
        if(e == ' ') printf("  "); else if(e == 'O') printf("🔴"); else { printf("⚪");}
        printf("🧱");
         if(f == ' ') printf("  "); else if(f == 'O') printf("🔴"); else { printf("⚪");}
        printf("\n               🧱🧱🧱🧱🧱");
        printf("\n               ");
         if(g == ' ') printf("  "); else if(g == 'O') printf("🔴"); else { printf("⚪");}
        printf("🧱");
        if(h == ' ') printf("  "); else if(h == 'O') printf("🔴"); else { printf("⚪");}
        printf("🧱");
         if(i == ' ') printf("  "); else if(i == 'O') printf("🔴"); else { printf("⚪");}
        printf("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
        printf("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
        printf("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
        if(final < 1){
            printf("\njagador %i ", jogador);
            __fpurge(stdin);
            scanf("%c", &jogada);
        }
        else if(final <= 2){
            fim = 1;
            if(ganhador == 1){
            printf("\njogador um ganhou");
            }
        if(ganhador == 2){
            printf("\njogador dois ganhou");
            }
        if(ganhador == 3){
            printf("\ndeu velha");
            }
            
        }
        valida = 0;
        if (jogada == 'a' && a == ' '){
        
            if (jogador == 1){
                a = 'O';
                valida = 1;
        }
            else{
                a = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'b' && b == ' '){
        
            if (jogador == 1){
                b = 'O';
                valida = 1;
        }
            else{
                b = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'c' && c == ' '){
        
            if (jogador == 1){
                c = 'O';
                valida = 1;
        }
            else{
                c = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'd' && d == ' '){
        
            if (jogador == 1){
                d = 'O';
                valida = 1;
        }
            else{
                d = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'e' && e == ' '){
        
            if (jogador == 1){
                e = 'O';
                valida = 1;
        }
            else{
                e = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'f' && f == ' '){
        
            if (jogador == 1){
                f = 'O';
                valida = 1;
        }
            else{
                f = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'g' && g == ' '){
        
            if (jogador == 1){
                g = 'O';
                valida = 1;
        }
            else{
                g = 'X';
            valida = 1;
            }   
        }
        if (jogada == 'h' && h == ' '){
        
            if (jogador == 1){
                h = 'O';
                valida = 1;
        }
            else{
                h= 'X';
            valida = 1;
            }   
        }
        if (jogada == 'i' && i == ' '){
        
            if (jogador == 1){
                i = 'O';
                valida = 1;
        }
            else{
                i = 'X';
            valida = 1;
            }   
        }
        if(jogador == 1){
            if(
                (a == 'O' && b == 'O' && c == 'O')||
                (d == 'O' && e == 'O' && f == 'O')||  
                (g == 'O' && h == 'O' && i == 'O')||  
                (a == 'O' && d == 'O' && g == 'O')||  
                (b == 'O' && e == 'O' && h == 'O')||  
                (c == 'O' && f == 'O' && i == 'O')||  
                (a == 'O' && e == 'O' && i == 'O')||  
                (c == 'O' && e == 'O' && g == 'O') 
            ) 
            {
                ganhador = 1;
                final ++;
            }
        }
        if(jogador == 2){
            if(
                (a == 'X' && b == 'X' && c == 'X')||
                (d == 'X' && e == 'X' && f == 'X')||  
                (g == 'X' && h == 'X' && i == 'X')||  
                (a == 'X' && d == 'X' && g == 'X')||  
                (b == 'X' && e == 'X' && h == 'X')||  
                (c == 'X' && f == 'X' && i == 'X')||  
                (a == 'X' && e == 'X' && i == 'X')||  
                (c == 'X' && e == 'X' && g == 'X') 
            ){
                ganhador = 2;
                final ++;
            
            }
        }
        if(fim == 0 && ganhador !=2 && ganhador != 1){
            if(a != ' ' && b != ' ' && c != ' ' && d != ' ' && e != ' ' && f != ' ' && g != ' ' && h != ' ' && i != ' ' ){
                final ++;
                ganhador = 3;
            }
        }
        



         if(valida == 1){
            if(jogador == 1) jogador = 2;
            else jogador = 1;
         }

    }
}