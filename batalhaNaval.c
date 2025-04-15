#include <stdio.h>

#define TABULEIRO 10
#define CONE 5
#define CRUZ 5
#define OCTAEDRO 5

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TABULEIRO][TABULEIRO]) {
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para criar a área de efeito de cone
void gerarCone(int tabuleiro[TABULEIRO][TABULEIRO], int origemX, int origemY) {
    int cone[CONE][CONE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    for (int i = 0; i < CONE; i++) {
        for (int j = 0; j < CONE; j++) {
            if (cone[i][j] == 1) {
                int x = origemX + i - CONE / 2;
                int y = origemY + j - CONE / 2;
                if (x >= 0 && x < TABULEIRO && y >= 0 && y < TABULEIRO) {
                    // Só marca se não for um navio (3)
                    if (tabuleiro[x][y] != 3) {
                        tabuleiro[x][y] = 5;
                    }
                }
            }
        }
    }
}

// Função para criar a área de efeito de cruz
void gerarCruz(int tabuleiro[TABULEIRO][TABULEIRO], int origemX, int origemY) {
    int cruz[CRUZ][CRUZ] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    for (int i = 0; i < CRUZ; i++) {
        for (int j = 0; j < CRUZ; j++) {
            if (cruz[i][j] == 1) {
                int x = origemX + i - CRUZ / 2;
                int y = origemY + j - CRUZ / 2;
                if (x >= 0 && x < TABULEIRO && y >= 0 && y < TABULEIRO) {
                    // Só marca se não for um navio (3)
                    if (tabuleiro[x][y] != 3) {
                        tabuleiro[x][y] = 5;
                    }
                }
            }
        }
    }
}

// Função para criar a área de efeito de octaedro
void gerarOctaedro(int tabuleiro[TABULEIRO][TABULEIRO], int origemX, int origemY) {
    int octaedro[OCTAEDRO][OCTAEDRO] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    for (int i = 0; i < OCTAEDRO; i++) {
        for (int j = 0; j < OCTAEDRO; j++) {
            if (octaedro[i][j] == 1) {
                int x = origemX + i - OCTAEDRO / 2;
                int y = origemY + j - OCTAEDRO / 2;
                if (x >= 0 && x < TABULEIRO && y >= 0 && y < TABULEIRO) {
                    // Só marca se não for um navio (3)
                    if (tabuleiro[x][y] != 3) {
                        tabuleiro[x][y] = 5;
                    }
                }
            }
        }
    }
}

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TABULEIRO][TABULEIRO] = {0};

    tabuleiro[2][3] = 3;  // Navio 1
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;

    tabuleiro[6][7] = 3;  // Navio 2
    tabuleiro[6][8] = 3;
    tabuleiro[6][9] = 3;

    // Define as posições de origem das habilidades
    int origemConeX = 4, origemConeY = 4;
    int origemCruzX = 5, origemCruzY = 5;
    int origemOctaedroX = 7, origemOctaedroY = 7;

    // Gerar as áreas de efeito
    gerarCone(tabuleiro, origemConeX, origemConeY);
    gerarCruz(tabuleiro, origemCruzX, origemCruzY);
    gerarOctaedro(tabuleiro, origemOctaedroX, origemOctaedroY);

    // Exibir o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
