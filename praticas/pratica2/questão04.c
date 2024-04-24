/* Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).*/
#include <stdio.h>

int main() {
    float largura, comprimento, area_em_metros_quadrados, area_em_hectares;

    // Solicita ao usuário para inserir a largura e o comprimento do terreno em metros
    printf("Digite a largura do terreno em metros:\n");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno em metros:\n");
    scanf("%f", &comprimento);

    // Calcula a área do terreno em metros quadrados
    area_em_metros_quadrados = largura * comprimento;

    // Converte a área do terreno para hectares
    area_em_hectares = area_em_metros_quadrados / 10000;

    // Exibe o resultado
    printf("A area do terreno em hectares eh: %.2f hectares.\n", area_em_hectares);

    return 0;
}
