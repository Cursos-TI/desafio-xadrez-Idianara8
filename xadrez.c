#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    printf("--- Nivel Novato: Loops Simples ---\n");

        // Movimentacao do Bispo (5 casas na diagonal superior direita)
            printf("\n--- Movimentando o Bispo ---\n");
                for (int i = 0; i < 5; i++) {
                        printf("Cima\n");
                                printf("Direita\n");
                                    }

                                        // Movimentacao da Torre (5 casas para a direita)
                                            printf("\n--- Movimentando a Torre ---\n");
                                                for (int i = 0; i < 5; i++) {
                                                        printf("Direita\n");
                                                            }

                                                                // Movimentacao da Rainha (8 casas para a esquerda)
                                                                    printf("\n--- Movimentando a Rainha ---\n");
                                                                        int i = 0;
                                                                            while (i < 8) {
                                                                                    printf("Esquerda\n");
                                                                                            i++;
                                                                                                }
                                                                                                    
                                                                                                        printf("--- Nivel Aventureiro: Movimento do Cavalo (Loops Separados) ---\n");

                                                                                                            // Movimentacao do Cavalo em 'L' (baixo e esquerda)
                                                                                                                // Primeiro movimento: 2 casas para baixo (loop 'for')
                                                                                                                    for (int i = 0; i < 2; i++) {
                                                                                                                            printf("Baixo\n");
                                                                                                                                }

                                                                                                                                    // Segundo movimento: 1 casa para a esquerda (loop 'do-while')
                                                                                                                                        int j = 0;
                                                                                                                                            do {
                                                                                                                                                    printf("Esquerda\n");
                                                                                                                                                            j++;
                                                                                                                                                                } while (j < 1);

                                                                                                                                                                // Funcao recursiva para mover o Bispo (5 casas diagonal direita para cima)
                                                                                                                                                                void moverBispo(int casasRestantes) {
                                                                                                                                                                    if (casasRestantes > 0) {
                                                                                                                                                                            printf("Cima\n");
                                                                                                                                                                                    printf("Direita\n");
                                                                                                                                                                                            moverBispo(casasRestantes - 1);
                                                                                                                                                                                                }
                                                                                                                                                                                                }

                                                                                                                                                                                                // Funcao recursiva para mover a Torre (5 casas para a direita)
                                                                                                                                                                                                void moverTorre(int casasRestantes) {
                                                                                                                                                                                                    if (casasRestantes > 0) {
                                                                                                                                                                                                            printf("Direita\n");
                                                                                                                                                                                                                    moverTorre(casasRestantes - 1);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                        // Funcao recursiva para mover a Rainha (8 casas para a esquerda)
                                                                                                                                                                                                                        void moverRainha(int casasRestantes) {
                                                                                                                                                                                                                            if (casasRestantes > 0) {
                                                                                                                                                                                                                                    printf("Esquerda\n");
                                                                                                                                                                                                                                            moverRainha(casasRestantes - 1);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                    printf("--- Nivel Mestre: Movendo Pecas com Recursao e Loops Avancados ---\n");

                                                                                                                                                                                                                                                        // Funcoes recursivas
                                                                                                                                                                                                                                                            printf("\n--- Bispo (Recursivo) ---\n");
                                                                                                                                                                                                                                                                moverBispo(5);

                                                                                                                                                                                                                                                                    printf("\n--- Torre (Recursivo) ---\n");
                                                                                                                                                                                                                                                                        moverTorre(5);

                                                                                                                                                                                                                                                                            printf("\n--- Rainha (Recursivo) ---\n");
                                                                                                                                                                                                                                                                                moverRainha(8);

                                                                                                                                                                                                                                                                                    // Movimentacao do Cavalo com loops aninhados e 'break'/'continue'
                                                                                                                                                                                                                                                                                        printf("\n--- Cavalo (Loops Aninhados com Break/Continue) ---\n");
                                                                                                                                                                                                                                                                                            for (int k = 0; k < 2; k++) {
                                                                                                                                                                                                                                                                                                    for (int l = 0; l < 2; l++) {
                                                                                                                                                                                                                                                                                                                if (k == 0) {
                                                                                                                                                                                                                                                                                                                                printf("Cima\n");
                                                                                                                                                                                                                                                                                                                                                break; 
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                        if (l == 1) {
                                                                                                                                                                                                                                                                                                                                                                                        printf("Direita\n");
                                                                                                                                                                                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                                                                                                                                                                                                    continue; 
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                                                
