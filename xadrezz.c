#include <stdio.h>

// Definição das constantes para os movimentos
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// --- Funções Recursivas (Nível Mestre) ---
// Bispo: movimento diagonal (ex: cima + direita)
void moverBispo(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Movimento do Bispo: Cima\n");
        printf("Movimento do Bispo: Direita\n");
        moverBispo(casasRestantes - 1);
    }
}

// Torre: movimento reto (ex: direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Movimento da Torre: Direita\n");
        moverTorre(casasRestantes - 1);
    }
}

// Rainha: combinação de torre e bispo (diagonal + reta)
void moverRainha(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Movimento da Rainha: Cima\n");
        printf("Movimento da Rainha: Esquerda\n");
        moverRainha(casasRestantes - 1);
    }
}

// --- Função Principal ---
int main() {
    printf("=== Desafio de Xadrez da Estácio ===\n");

    // Nível Novato: Loops Simples
    printf("\n--- Nível Novato: Loops Simples ---\n");

    // Bispo: movimento diagonal
    printf("\nMovimentando o Bispo (loop):\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Movimento do Bispo: Cima\n");
        printf("Movimento do Bispo: Direita\n");
    }

    // Torre: movimento reto
    printf("\nMovimentando a Torre (loop):\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Movimento da Torre: Direita\n");
    }

    // Rainha: movimento diagonal + reto
    printf("\nMovimentando a Rainha (loop):\n");
    int i = 0;
    while (i < MOVIMENTO_RAINHA) {
        printf("Movimento da Rainha: Esquerda\n");
        i++;
    }

    // Nível Aventureiro: Movimento do Cavalo com loops
    printf("\n--- Nível Aventureiro: Movimento do Cavalo ---\n");
    printf("Movimento do Cavalo: 2 casas para baixo\n");
    for (int k = 0; k < 2; k++) {
        printf("Cavalo: Baixo\n");
    }

    printf("Movimento do Cavalo: 1 casa para a esquerda\n");
    int l = 0;
    do {
        printf("Cavalo: Esquerda\n");
        l++;
    } while (l < 1);

    // Nível Mestre: Recursão e loops avançados
    printf("\n--- Nível Mestre: Recursão e Loops Avançados ---\n");

    printf("\nBispo (recursivo):\n");
    moverBispo(MOVIMENTO_BISPO);

    printf("\nTorre (recursivo):\n");
    moverTorre(MOVIMENTO_TORRE);

    printf("\nRainha (recursivo):\n");
    moverRainha(MOVIMENTO_RAINHA);

    // Cavalo com lógica condicional (loops aninhados com break/continue)
    printf("\nMovimento do Cavalo (loops com break/continue):\n");
    for (int m = 0; m < 2; m++) {
        for (int n = 0; n < 2; n++) {
            if (m == 0) {
                printf("Cavalo: Cima\n");
                break;
            }
            if (n == 1) {
                printf("Cavalo: Direita\n");
            } else {
                continue;
            }
        }
    }

    return 0;
}
