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

  printf("Digite outro número (2/10)");
  scanf("%d", &numero2);

  printf("Digite outro número (3/10)");
  scanf("%d", &numero3);

  printf("Digite outro número (4/10)");
  scanf("%d", &numero4);

  printf("Digite outro número (5/10)");
  scanf("%d", &numero5);

  printf("Digite outro número (6/10)");
  scanf("%d", &numero6);

  printf("Digite outro número (7/10)");
  scanf("%d", &numero7);

  printf("Digite outro número (8/10)");
  scanf("%d", &numero8);

  printf("Digite outro número (9/10)");
  scanf("%d", &numero9);

  printf("Digite o último número (10/10)");
  scanf("%d", &numero10);

  printf("|\n");

  if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4 && numero1 > numero5 && numero1 > numero6 && numero1 > numero7 && numero1 > numero8 && numero1 > numero9 && numero1 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero1);
  } else if (numero2 > numero1 && numero2 > numero3 && numero2 > numero4 && numero2 > numero5 && numero2 > numero6 && numero2 > numero7 && numero2 > numero8 && numero2 > numero9 && numero2 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero2);
  } else if (numero3 > numero2 && numero3 > numero1 && numero3 > numero4 && numero3 > numero5 && numero3 > numero6 && numero3 > numero7 && numero3 > numero8 && numero3 > numero9 && numero3 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero3);
  } else if (numero4 > numero2 && numero4 > numero3 && numero4 > numero1 && numero4 > numero5 && numero4 > numero6 && numero4 > numero7 && numero4 > numero8 && numero4 > numero9 && numero4 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero4);
  } else if (numero5 > numero2 && numero5 > numero3 && numero5 > numero4 && numero5 > numero1 && numero5 > numero6 && numero5 > numero7 && numero5 > numero8 && numero5 > numero9 && numero5 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero5);
  } else if (numero6 > numero2 && numero6 > numero3 && numero6 > numero4 && numero6 > numero5 && numero6 > numero1 && numero6 > numero7 && numero6 > numero8 && numero6 > numero9 && numero6 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero6);
  } else if (numero7 > numero2 && numero7 > numero3 && numero7 > numero4 && numero7 > numero5 && numero7 > numero6 && numero7 > numero1 && numero7 > numero8 && numero7 > numero9 && numero7 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero7);
  } else if (numero8 > numero2 && numero8 > numero3 && numero8 > numero4 && numero8 > numero5 && numero8 > numero6 && numero8 > numero7 && numero8 > numero1 && numero8 > numero9 && numero8 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero8);
  } else if (numero9 > numero2 && numero9 > numero3 && numero9 > numero4 && numero9 > numero5 && numero9 > numero6 && numero9 > numero7 && numero9 > numero8 && numero9 > numero1 && numero9 > numero10) {
    printf("O número: %d é o maior de todos.\n", numero9);
  } else {
    printf("O número: %d é o maior de todos.\n", numero10);
  }
  
  printf("\n");
  
  return 0;
}