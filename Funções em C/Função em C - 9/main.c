#include <stdio.h>

int main(void) {
  
  float area;
  float base;
  float altura;

  printf("\n");

  printf("Dugite a base de um triângulo: ");
  scanf("%f",&base);
  
  printf("Digite a altura desse triângulo: ");
  scanf("%f",&altura);
  
  area=(base*altura)/2;

  printf("|\n");
  
  printf("Área do triângulo: %f\n", area);

  printf("\n");
  
  return 0;
}