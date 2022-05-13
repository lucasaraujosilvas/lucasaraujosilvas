#include <stdio.h>

int main(void) {

  int numero;
  int x;

  printf("\n");

  printf("Digite um número de 1 até 10: ");
  scanf("%d", &numero);

  printf("\n");

  printf("Tabuada do número: %d", numero);
  printf("\n-------------\n");
  
  for(x = 1; x <= 10; ++x) {
    printf("| %d x %d = %d\n", numero, x, numero * x);
  }

  printf("-------------\n");

  printf("\n");
  
  return 0;
}