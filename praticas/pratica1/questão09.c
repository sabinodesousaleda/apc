/*
Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>

int main() {
    int anos, meses, dias, idade_em_dias;

    // Solicita ao usuário para inserir a idade em anos, meses e dias
    printf("Digite a idade em anos, meses e dias:\n");
    scanf("%d %d %d", &anos, &meses, &dias);

    // Calcula a idade em dias
    idade_em_dias = anos * 365 + meses * 30 + dias;

    // Exibe o resultado
    printf("A idade em dias é: %d\n", idade_em_dias);

    return 0;
}