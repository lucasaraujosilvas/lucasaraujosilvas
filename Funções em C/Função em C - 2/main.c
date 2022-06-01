#include <stdio.h>

int main() {
  
  int n1, n2, a, b, resto;

  printf("\n");
  
  printf("Digite um numero: ");
  scanf("%d", &n1);

  printf("Digite mais um numero: ");
  scanf("%d", &n2);
  
  a = n1; b = n2;
  
  do {
    
    resto = a % b;
    a = b;
    b = resto;
    
  } while (resto!=0);

  printf("|\n");
  printf("O MDC entre %d e %d = %d\n", n1,n2,a);

  printf("\n");

  return 0;
}