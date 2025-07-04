#include <stdio.h>

int main(){

    
    int tabuleiro[10][10];

    // Loop para percorrer as linhas do tabuleiro (de 0 a 9) 
    for (int i = 0; i < 10; i++) {

    // Loop para percorrer as colunas do tabuleiro (de 0 a 9)
    for (int j = 0; j < 10; j++) {
         
        // Em cada célula [linha][coluna], coloque o valor 0
        tabuleiro[i][j] = 0;
    }

    }
        // Loop para posicionar um navio de tamanho 3 na horizontal
    for (int i = 0; i < 3; i++) {
        // A linha é sempre 2. A coluna começa em 3 e aumenta a cada passo (3, 4, 5). 
        tabuleiro[2][3 + i] = 3;
    }
        // Loop para posicionar um navio de tamanho 3 na vertical
    for (int i = 0; i < 3; i++) {

        // A coluna é sempre 7. A linha começa em 5 e aumenta a cada passo (5, 6, 7).
        tabuleiro[5 + i][7] = 3;
    }

     printf("--- TABULEIRO BATALHA NAVAL ---\n");
    for (int i = 0; i < 10; i++) { // loop das linhas
    
        for (int j = 0; j < 10; j++) { // Loop das colunas
        printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula e um espaço
    }
    printf("\n"); // Essencial: Pula para a próxima linha depois de imprimir todas as colunas
}

    return 0;

}