#include<stdio.h>
#include <locale.h>
 
int main(void) {
  
  setlocale(LC_ALL, "");
  int num, i, resultado = 0;

  printf("\n");
 
  printf("Digite um número aleatório: ");
  scanf("%d", &num);

  printf("|\n");
 
  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      resultado++;
      break;
    }
  }
 
  if (resultado == 0) {
    
    printf("O número %d é um número primo.\n", num);
    
  }  else {
    
    printf("O número %d não é um número primo.\n", num);
    
  }

  printf("\n");
 
  return 0;
}