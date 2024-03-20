/*
  Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
# include <stdio.h>

int main() {
  int raio;
  float perimetro;
 printf("Entre com o raio da pizza:");
  scanf("%d", &raio);
  
  perimetro = 2 * 3.1416 * raio; 

  printf("O perimetro da pizza é: %.2f\n",perimetro);

  return 0;
}