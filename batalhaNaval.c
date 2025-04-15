#include <stdio.h>

int main() {
    int tabuleiro[10][10];  // Matriz 10x10 para representar o tabuleiro

    // Inicializar todo o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

  // === POSICIONAMENTO DOS 4 NAVIOS (tamanho 3) ===
    
    // Navio 1: horizontal a partir de (2,3)
    if (2 < 10 && 3+2 < 10 &&
        tabuleiro[2][3] == 0 &&
        tabuleiro[2][4] == 0 &&
        tabuleiro[2][5] == 0) {
        tabuleiro[2][3] = 3;
        tabuleiro[2][4] = 3;
        tabuleiro[2][5] = 3;
    }

    // Navio 2: vertical a partir de (0,7)
    if (0+2 < 10 && 7 < 10 &&
        tabuleiro[0][7] == 0 &&
        tabuleiro[1][7] == 0 &&
        tabuleiro[2][7] == 0) {
        tabuleiro[0][7] = 3;
        tabuleiro[1][7] = 3;
        tabuleiro[2][7] = 3;
    }

    // Navio 3: diagonal ↘ a partir de (4,0)
    if (4+2 < 10 && 0+2 < 10 &&
        tabuleiro[4][0] == 0 &&
        tabuleiro[5][1] == 0 &&
        tabuleiro[6][2] == 0) {
        tabuleiro[4][0] = 3;
        tabuleiro[5][1] = 3;
        tabuleiro[6][2] = 3;
    }

    // Navio 4: diagonal ↙ a partir de (2,6)
    if (2+2 < 10 && 6-2 >= 0 &&
        tabuleiro[2][6] == 0 &&
        tabuleiro[3][5] == 0 &&
        tabuleiro[4][4] == 0) {
        tabuleiro[2][6] = 3;
        tabuleiro[3][5] = 3;
        tabuleiro[4][4] = 3;
    }

    // === EXIBIÇÃO DO TABULEIRO ===
    printf("   ");
    for (int letra = 0; letra < 10; letra++) {
        printf(" %c ", 'A' + letra); // Cabeçalho com letras
    }
    printf("\n");

    for (int linha = 0; linha < 10; linha++) {
        printf("%2d ", linha); // Número da linha
        for (int coluna = 0; coluna < 10; coluna++) {
            printf(" %d ", tabuleiro[linha][coluna]); // Mostra valor
        }
        printf("\n");
    }

    return 0;
}