/*/ Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
 */
#include <stdio.h>

int main() {
    float valor_compra, depreco, valor_depreciado;
    int ano_fabricacao, ano_depreciacao;

    // Solicita ao usuário para inserir o valor de compra, o ano de fabricação e o ano de depreciação do veículo
    printf("Digite o valor de compra do veiculo:\n");
    scanf("%f", &valor_compra);
    printf("Digite o ano de fabricacao do veiculo:\n");
    scanf("%d", &ano_fabricacao);
    printf("Digite o ano de depreciação do veiculo:\n");
    scanf("%d", &ano_depreciacao);

    // Calcula o valor depreciado
    depreco = ano_depreciacao - ano_fabricacao;
    valor_depreciado = depreco * 0.01 * valor_compra;

    // Exibe o resultado
    printf("O valor depreciado do veiculo eh: R$ %.2f\n", valor_depreciado);

    return 0;
}
