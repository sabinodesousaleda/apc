/*
Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
# include <stdio.h>
# include <math.h>

int main () {
  
  float distancia = 1000;
  float angulo = 45;
  float altura = sin(angulo) * distancia;
  
  printf("A altura alcançada pelo avião é %.2f\n", altura);
  
  return 0;
}