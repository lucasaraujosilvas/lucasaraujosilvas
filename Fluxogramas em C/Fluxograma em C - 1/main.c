#include <stdio.h>

int main(void) {

  int peso;
  float altura, imc;

  printf("\n");
  
  printf("Digite o seu peso: ");
  scanf("%d", &peso);

  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("|");
  
  printf("\nIMC = %.2f", imc);

  if(imc < 20) {
    printf("\nAbaixo do peso\n");
  }else if (imc >= 20 && imc < 25) {
    printf("\nPeso normal\n");
  }else if (imc >= 25 && imc < 30) {
    printf("\nAcima do peso\n");
  }else if (imc >= 30 && imc < 34) {
    printf("\nObeso\n");
  }else {
    printf("\nMuito obeso\n");
  }

  printf("\n");
  
  return 0;
}