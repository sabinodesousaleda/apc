/* Faça um programa em linguagem C que resulte em um jogo da velha. O jogo deve ser jogado por 2 jogadores. cada jogador deve escolher um símbolo para jogar na tabela 3x3. O jogo deve ser encerrado quando um dos jogadores conquista uma linha, uma coluna ou uma diagonal. O jogo deve informar o vencedor.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO_TABULEIRO 3
#define SIMBOLO_JOGADOR_X 'X'
#define SIMBOLO_JOGADOR_O 'O'
#define SIMBOLO_VAZIO ' '
#define SIMBOLO_JOGADOR_1 SIMBOLO_JOGADOR_X
#define SIMBOLO_JOGADOR_2 SIMBOLO_JOGADOR_O
#define SIMBOLO_JOGADOR_1_STRING "Jogador 1"
#define SIMBOLO_JOGADOR_2_STRING "Jogador 2"
#define SIMBOLO_JOGADOR_1_VENCEU "Jogador 1 venceu!"
#define SIMBOLO_JOGADOR_2_VENCEU "Jogador 2 venceu!"
#define SIMBOLO_EMPATE "Empate!"
#define SIMBOLO_JOGADA_INVALIDA "Jogada inválida!"

char board[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

// Função para inicializar o tabuleiro com espaços em branco
void initializeBoard() {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            board[i][j] = SIMBOLO_VAZIO;
        }
    }
}

// Função para exibir o tabuleiro
void printBoard() {
    printf("\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %c ", board[i][j]);
            if (j < TAMANHO_TABULEIRO - 1) printf("|");
        }
        printf("\n");
        if (i < TAMANHO_TABULEIRO - 1) printf("---|---|---\n");
    }
    printf("\n");
}

// Função para verificar se há um vencedor
char checkWinner() {
    // Verificar linhas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != SIMBOLO_VAZIO) {
            return board[i][0];
        }
    }
    // Verificar colunas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != SIMBOLO_VAZIO) {
            return board[0][i];
        }
    }
    // Verificar diagonais
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != SIMBOLO_VAZIO) {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != SIMBOLO_VAZIO) {
        return board[0][2];
    }
    return SIMBOLO_VAZIO; // Não há vencedor ainda
}

// Função para verificar se o tabuleiro está cheio
bool isBoardFull() {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (board[i][j] == SIMBOLO_VAZIO) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int row, col;
    char currentPlayer = SIMBOLO_JOGADOR_1;
    char winner = SIMBOLO_VAZIO;

    initializeBoard();

    while (winner == SIMBOLO_VAZIO && !isBoardFull()) {
        printBoard();
        printf("%s, insira a linha e coluna (0, 1 ou 2): ", (currentPlayer == SIMBOLO_JOGADOR_1) ? SIMBOLO_JOGADOR_1_STRING : SIMBOLO_JOGADOR_2_STRING);
        int result = scanf("%d %d", &row, &col);

        if (result == 2 && row >= 0 && row < TAMANHO_TABULEIRO && col >= 0 && col < TAMANHO_TABULEIRO && board[row][col] == SIMBOLO_VAZIO) {
            board[row][col] = currentPlayer;
            winner = checkWinner();
            if (winner == SIMBOLO_VAZIO && !isBoardFull()) {
                currentPlayer = (currentPlayer == SIMBOLO_JOGADOR_1) ? SIMBOLO_JOGADOR_2 : SIMBOLO_JOGADOR_1;
            }
        } else {
            printf("%s\n", SIMBOLO_JOGADA_INVALIDA);
            while (getchar() != '\n'); // Limpar o buffer de entrada
        }
    }

    printBoard();

    if (winner != SIMBOLO_VAZIO) {
        printf("%s\n", (winner == SIMBOLO_JOGADOR_1) ? SIMBOLO_JOGADOR_1_VENCEU : SIMBOLO_JOGADOR_2_VENCEU);
    } else {
        printf("%s\n", SIMBOLO_EMPATE);
    }

return 0;
}
