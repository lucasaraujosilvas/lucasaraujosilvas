#include <stdio.h>

int main(void) {
  
  int numero;
  int fatorial = 1;

  printf("\n");
  
  printf("Digite um número: ");
  scanf("%d", &numero);

  for( ; numero >= 1; --numero) {
    fatorial *= numero;
  }

  printf("O fatorial desse número é: %d\n", fatorial);

  printf("\n");

  return 0;
}