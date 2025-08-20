#include <stdio.h>

int main() {
    // ============================
    // Simulação de movimentos no Xadrez
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while
    // ============================

    // Variáveis para definir quantas casas mover cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ============================
    // Movimento da Torre
    // ============================
    printf("=== Movimento da Torre ===\n");
    // Torre vai andar 5 casas para a direita
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ============================
    // Movimento do Bispo
    // ============================
    printf("\n=== Movimento do Bispo ===\n");
    // Bispo vai andar 5 casas na diagonal para cima e direita
    int i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ============================
    // Movimento da Rainha
    // ============================
    printf("\n=== Movimento da Rainha ===\n");
    // Rainha vai andar 8 casas para a esquerda
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentoRainha);

    return 0;
}

