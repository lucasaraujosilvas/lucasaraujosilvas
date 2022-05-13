#include <stdio.h>

int main(void) {

  int cl;
  int crr;
  int fr;
  int to;
  int qt = 0;
  int pa = 0;

  printf("\n");

  printf("Digite o valor do carro que deseja comprar (Sem pontuação): ");
  scanf("%d", &crr);

  printf("\n");

  printf("|PARCELAMENTOS|\n");

  printf("\n");

  for(cl=1;cl<=10;cl++) {
    
    qt=qt+6;
    pa=pa+3;
    fr=crr+((pa*crr)/100);
    to=crr/qt;

    printf("* %d parcelas de %d -> Total: %d\n", qt, to, fr);
  }

  printf("\n");

  return 0;
}