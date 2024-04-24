/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/
#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena, milhar;

    // Solicita ao usuário para inserir o número inteiro
    printf("Digite um numero inteiro de ate 4 digitos:\n");
    scanf("%d", &numero);

    // Calcula as unidades, dezenas, centenas e milhares
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    milhar = (numero / 1000) % 10;

    // Exibe o resultado
    printf("O numero %d decomposto em unidade, dezena, centena e milhar e: %d unidades, %d dezenas, %d centenas e %d milhares.\n", numero, unidade, dezena, centena, milhar);

    return 0;
}
