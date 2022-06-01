#include <stdio.h>

int main(void) {
  
  double b;
  double B;
  double h;
  double a;

  printf("\n");
  
  printf("Digite o comprimento da menor base do trapézio: ");
  scanf("%lf", &b);
  
  while (b<=0) {
    
    printf("O valor que você digitou: %lf não é válido!\nDigite o valor novamente: ", b);
    scanf("%lf", b);
    
  }
  
  printf("Digite o comprimento da maior base do trapézio: ");
  scanf("%lf", &B);
  
  while (B<=0) {
    
    printf("O valor que você digitou: %lf não é válido!\nDigite o valor novamente: ", B);
    scanf("%lf", B);
    
  while (b>B) {
    
    printf("A menor base: %lf não pode ser maior que a maior base: %lf\nDigite o valor da menor base novamente: ");
    scanf("%lf", b);
      
    printf("Digite o valor da maior base novamente: ");
    scanf("%lf", B);
    
  }
    
  }
  
  printf("Digite a altura do trapézio: ");
  scanf("%lf", &h);
  
  while (h<=0) {
    
    printf("O valor que você digitou: %lf não é válido!\nDigite o valor novamente: ", h);
    scanf("&lf", h);
    
  }

  printf("|\n");
  
  a = ((b + B) * h) / 2;
  
  printf("A área do trapézio é: %lf\n", a);     

  printf('\n');
  
  return 0;
}