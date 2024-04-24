/*Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/
#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita ao usuário para inserir o peso e a altura da pessoa
    printf("Digite o peso da pessoa em kg:\n");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa em metros:\n");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado
    printf("O IMC da pessoa é: %.2f\n", imc);

    return 0;
}
