

int main () {
  int numero;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    int qtde_divisores = 0;
    for(int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        qtde_divisores++;
      }
    }
    if (qtde_divisores ==2)
      printf("O numero %i é primo!\n", numero);
  } else {
    printf("Numero %i eh primo!\n", numero);
  }
} else {

}