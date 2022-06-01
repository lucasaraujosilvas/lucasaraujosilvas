#include <stdio.h>

int main(void) {
  
  int numero1;
  int numero2;
  int numero3;
  int numero4;
  int numero5;
  int numero6;
  int numero7;
  int numero8;
  int numero9;
  int numero10;

  printf("\n");

  printf("Digite o primeiro número (1/10): ");
  scanf("%d", &numero1);
  
  printf("Digite outro número (2/10): ");
  scanf("%d", &numero2);
  
  printf("Digite outro número (3/10): ");
  scanf("%d", &numero3);
  
  printf("Digite outro número (4/10): ");
  scanf("%d", &numero4);
  
  printf("Digite outro número (5/10): ");
  scanf("%d", &numero5);
  
  printf("Digite outro número (6/10): ");
  scanf("%d", &numero6);
  
  printf("Digite outro número (7/10): ");
  scanf("%d", &numero7);
  
  printf("Digite outro número (8/10): ");
  scanf("%d", &numero8);
  
  printf("Digite outro número (9/10): ");
  scanf("%d", &numero9);
  
  printf("Digite o último número (10/10): ");
  scanf("%d", &numero10);
  
  if (numero1 > numero3) {
    int tmp = numero3;
    numero3 = numero1;
    numero1 = tmp;
  }
  
  if (numero1 > numero2) {
    int tmp = numero2;
    numero2 = numero1;
    numero1 = tmp;
  }
  
  if (numero2 > numero3) {
    int tmp = numero3;
    numero3 = numero2;
    numero2 = tmp;
  }
  
  printf("%d %d %d %d %d %d %d %d %d %d", numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10,);

  return 0;
}
