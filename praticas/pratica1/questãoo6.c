/* Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/
# include <stdio.h>
# include <math.h>

int main() {
  float a, b, c;
  float delta;
  float x1, x2;
  
  printf("Digite o valor de a:");
  scanf("%f", &a);
  
  printf("Digite o valor de b:");
  scanf("%f", &b);
  
  printf("Digite o valor de c:");
  scanf("%f", &c);
  
  delta = b * b - 4 * a * c;
  x1 = (-b + sqrt(delta)) /;
  x2 = (-b - sqrt(delta)) /;
  
  printf("As raizes da equação são: %.2f e %.2f\n", x1, x2);
  
  return 0;
}
    
  