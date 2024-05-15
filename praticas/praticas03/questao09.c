/*Faça um programa em C que leia números inteiros até ler zero, e imprima o maior e o menor entre eles.
*/
#include <stdio.h>

int main() {
int numero = 1

  while(numero != 0) {
  printf(" Entre com um numero. 0 zero para terminar : ");
  int deu_certo = scanf("%i", &numero);

  if (de_certo) {
    if (numero > maior ) {
      maior = numero;
     }
    { else }
  
  getchar()/;
    printf("Numero invalido. tenta outro\n");
  }
    
}

  printf("O maior numero foi %i, menor numero foi %i \n", maior, menor);
  
  return 0;
  
}