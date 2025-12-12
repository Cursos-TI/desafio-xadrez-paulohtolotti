#include <stdio.h>

/*
*   ASSINATURA DAS FUNÇÕES DE MOVIMENTO
*   Para o nível iniciante, todas as funções declaram a quantidade de casas 
*   para movimentação dentro do próprio escopo.
*/
void moveRook();
void moveBishop();
void moveQueen();

int main() {

    printf("TORRE\n");
    moveRook();

    printf("BISPO\n");
    moveBishop();
    
    printf("RAINHA\n");
    moveQueen();

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

/**
 * @brief Função para movimentar a Torre
 *
 * Usa um laço while para controlar a movimentação para a direita
 *
 * @return void
 */
void moveRook() {
    int n = 5;

    while(n > 0) {
        printf("Direita \n");
        n--;
    }
    printf("\n");
}

/**
 * @brief Função para movimentar o Bispo.
 *
 * Usa um laço do while para controlar a movimentação na diagonal
 *
 * @return void
 */
void moveBishop() {
    int n = 5;

    do {
        printf("Cima, Direita\n");
        n--;
    } while (n > 0);

    printf("\n");
}

/**
 * @brief Função para movimentar a Rainha.
 *
 * Usa um laço for para controlar a movimentação para a esquerda
 *
 * @return void
 */
void moveQueen() {

    int n = 8;
    for(int i=0; i<n; i++) {
        printf("Esquerda\n");
    }

    printf("\n");
}