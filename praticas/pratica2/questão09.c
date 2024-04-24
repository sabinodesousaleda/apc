/* Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/
#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir um número inteiro
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    // Converte o número para o caractere correspondente na tabela ASCII
    char caractere = (char)numero;

    // Exibe o caractere correspondente
    printf("O caractere correspondente ao numero %d na tabela ASCII eh: %c\n", numero, caractere);

    return 0;
}