/*10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.*/
#include <stdio.h>

int main() {
    int numero, i;

    // Solicita ao usuário para inserir um número inteiro
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    // Imprime a tabuada de multiplicação para o número fornecido
    printf("Tabuada de multiplicacao para o numero %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}



