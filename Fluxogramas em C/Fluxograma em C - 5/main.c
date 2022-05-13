#include <stdio.h>

int main(void) {

  int soma = 0;
  int n;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  while (n <= 5) {
    soma = soma + n;
    n++;
  }

  printf("A soma é %d", soma);
    
  return 0;
}