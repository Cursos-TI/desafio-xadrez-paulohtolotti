#include <stdio.h>

/*
*   ASSINATURA DAS FUNÇÕES DE MOVIMENTO
*   Para o nível iniciante, todas as funções declaram a quantidade de casas 
*   para movimentação dentro do próprio escopo.
*/
void moveRook();
void moveBishop();
void moveQueen();
void moveKnight();

int main() {

    int rookMoves = 5;
    int bishopMoves = 5;
    int queenMoves = 8;

    printf("TORRE\n");
    moveRook(rookMoves);

    printf("BISPO\n");
    moveBishop(bishopMoves);

    printf("RAINHA\n");
    moveQueen(queenMoves);

    printf("CAVALO\n");
    moveKnight();


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
 * Usa recursividade para exibir a movimentação. 
 * A condição de parada é avaliada no início e equivale a n == 0 (padrão early return)
 *
 * @return void
 */
void moveRook(int n) {

    if(n == 0) {
        printf("\n");
        return;
    }   

   printf("Direita\n");
   moveRook(--n);
}

/**
 * @brief Função para movimentar o Bispo.
 *
 * Usa dois for loops aninhados para controlar a movimentação
 *
 * @return void
 */
void moveBishop(int n) {

    for (int vertical = 0; vertical < n; vertical++) {  // Loop externo: vertical (Cima)
        for (int horizontal = 0; horizontal < 1; horizontal++) {  // Loop interno: horizontal (Direita) 
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

}

/**
 * @brief Função para movimentar a Rainha.
 *
 * Usa um laço for para controlar a movimentação para a esquerda
 *
 * @return void
 */
void moveQueen(int n) {

    if(n==0) {  
        printf("\n");
        return;
    }
 
    printf("Esquerda\n");
    moveQueen(n-1);
}

/**
 * @brief Função para movimentar o Cavalo.
 *
 * Usa um laço while para controlar o movimento em uma direção 
 * e um laço for para controlar os dois movimentos na direção contrária
 *
 * @return void
 */
void moveKnight(){
    
    int upMovements = 2;
    int rightMovements = 1;

    for(int i=0; i<upMovements; i++) {

        printf("Cima, ");
        if(i == 0) continue;
        for(int j=0; j<rightMovements; j++) {
            printf("Direita");
        }
    }

    printf("\n");
}