#include <stdio.h>

int main(void) {

  int ano;

  printf("\n");
  
  do {
    printf("Digite um ano: ");
    scanf("%d", &ano);
  } while(ano<1||ano>10000);

  if (ano%4==0 && (ano%100!=0 || ano%400==0)) {
    printf("\nO ano %d é bissexto\n", ano);
  } else {
    printf("\nO ano %d não é bissexto\n", ano);
  }

  printf("\n");
  
  return 0;
}