/* Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
*/
#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    // Solicita ao usuário para inserir os três números reais
    printf("Digite tres numeros reais:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calcula a média aritmética
    media = (num1 + num2 + num3) / 3;

    // Exibe o resultado
    printf("A media aritmetica dos numeros %.2f, %.2f e %.2f eh: %.2f\n", num1, num2, num3, media);

    return 0;
}
