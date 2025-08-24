#include <stdio.h>

int main() {
    // ============================
    // Simulação de movimentos no Xadrez
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while
    // Cavalo -> for + while (aninhados)
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

    // ============================
    // Movimento do Cavalo
    // ============================
    printf("\n=== Movimento do Cavalo ===\n");
    // Cavalo vai se mover em "L":
    // Duas casas para baixo e uma para a esquerda.
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop for para controlar as duas casas para baixo
    for (int k = 1; k <= casasBaixo; k++) {
        printf("Baixo\n");
    }

    // Loop while aninhado para controlar a casa à esquerda
    int l = 1;
    while (l <= casasEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}


