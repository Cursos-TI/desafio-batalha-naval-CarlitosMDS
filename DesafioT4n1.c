#include <stdio.h> 

int main (){
    char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    //declarando a posicão do primeiro navio
    tabuleiro[7][3] = 3;
    tabuleiro[7][4] = 3;
    tabuleiro[7][5] = 3;

    //declarando a posição do segundo navio
    tabuleiro[2][8] = 3;
    tabuleiro[3][8] = 3;
    tabuleiro[4][8] = 3;

       printf(" TABULEIRO BATALHA NAVAL \n\n");

       //organização das colunas
       printf("  ");
       for (int j = 0; j < 10; j++){
        printf("%c ", coluna[j]);
       }
       printf("\n");

       //organização das linhas
       for (int linha = 0; linha < 10; linha++){
        printf("%d ", linha +1);
        for (int coluna = 0; coluna < 10; coluna++) {
            if(tabuleiro[linha][coluna] == 3) //decide alterar o visual do tabuleiro na exibição
            printf("# ");// esse simbolo representara o navil
            else
            printf("~ ");// esse representara o mar

    
        }
        printf("\n");
       }
       
       return 0;
} 
