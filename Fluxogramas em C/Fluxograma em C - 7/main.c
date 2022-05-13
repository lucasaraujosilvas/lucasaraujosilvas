#include <stdio.h>

int main(void) {

  int h;
  int v;
  int numeroInt;

  printf("\n");

  printf("Digite um número inteiro entre 1 e 20: ");
  scanf("%d", &numeroInt);

  printf("\n");

  if(numeroInt >= 1 && numeroInt <= 20) {
    
    for(h = 1; h <= numeroInt; h++) {
      
      for(v = 1; v <= numeroInt; v++) {
        
        printf("#");
        
      }
      
      printf("\n");
      
    }
  }
  
  return 0;
}