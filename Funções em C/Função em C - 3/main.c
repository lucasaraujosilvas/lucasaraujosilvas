#include <stdio.h>

int main(void) {

  int a;
  int b;
  int c;

  printf("\n");
  
  printf("Digite o valor de 'a': ");
  scanf("%d", &a);

  printf("Digite o valor de 'b': ");
  scanf("%d", &b);

  printf("Digite o valor de 'c': ");
  scanf("%d", &c);

  printf("\n");
  
  if (a==b && a==c && b==c) {
    printf("Triângulo Equilátero\n");
  } else if (a!=b && a!=c && b!=c) {
    printf("Triângulo Escaleno\n");
  } else if (a==b) {
    printf("Triângulo Isósceles\n");
  } else if (a==c) {
    printf("Triângulo Isósceles\n");
  } else if (b==c) {
    printf("Triângulo Isósceles\n");
  }

  printf("\n");
  
  return 0;
}