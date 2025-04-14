#include <stdio.h>

int main() {
    int tabuleiro[10][10];  // Matriz 10x10 para representar o tabuleiro

    // Inicializar todo o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Definir posições dos navios (tamanho 3)
    // Navio 1: horizontal, começando na linha 2, coluna 3 (D)
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Navio 2: vertical, começando na linha 0, coluna 7 (H)
    tabuleiro[0][7] = 3;
    tabuleiro[1][7] = 3;
    tabuleiro[2][7] = 3;

    // Mostrar o tabuleiro na tela
    // Mostrar letras A-J como cabeçalho
    printf("   ");
    for (int letra = 0; letra < 10; letra++) {
        printf(" %c ", 'A' + letra);
    }
    printf("\n");

    // Mostrar números das linhas e conteúdo do tabuleiro
    for (int linha = 0; linha < 10; linha++) {
        printf("%2d ", linha);
        for (int coluna = 0; coluna < 10; coluna++) {
            printf(" %d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
