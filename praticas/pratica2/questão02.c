/*2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/
#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    // Solicita ao usuário para inserir os dois números inteiros
    printf("Digite dois numeros inteiros (dividendo divisor):\n");
    scanf("%d %d", &dividendo, &divisor);

    // Calcula o quociente e o resto da divisão
    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    // Exibe o resultado
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
