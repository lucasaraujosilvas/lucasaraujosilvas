#include <stdio.h>

int main(void) {

  int numero;
  
  int m1 = 1;
  int m2 = 2;
  int m3 = 3;
  int m4 = 4;
  int m5 = 5;
  int m6 = 6;
  int m7 = 7;
  int m8 = 8;
  int m9 = 9;
  int m10 = 10;
  
  int t1 = 1;
  int t2 = 2;
  int t3 = 3;
  int t4 = 4;
  int t5 = 5;
  int t6 = 6;
  int t7 = 7;
  int t8 = 8;
  int t9 = 9;
  int t10 = 10;

  printf("\n");
  
  printf("Digite um número de 1 até 10: ");
  scanf("%d", &numero);

  t1 = numero * m1;
  t2 = numero * m2;
  t3 = numero * m3;
  t4 = numero * m4;
  t5 = numero * m5;
  t6 = numero * m6;
  t7 = numero * m7;
  t8 = numero * m8;
  t9 = numero * m9;
  t10 = numero * m10;

  if (numero <= 10 && numero >= 1) {
    printf("\n");
    printf("Tabuada do número: %d", numero);
    printf("\n-------------");
    printf("\n| %d x %d = %d", numero, m1, t1);
    printf("\n| %d x %d = %d", numero, m2, t2);
    printf("\n| %d x %d = %d", numero, m3, t3);
    printf("\n| %d x %d = %d", numero, m4, t4);
    printf("\n| %d x %d = %d", numero, m5, t5);
    printf("\n| %d x %d = %d", numero, m6, t6);
    printf("\n| %d x %d = %d", numero, m7, t7);
    printf("\n| %d x %d = %d", numero, m8, t8);
    printf("\n| %d x %d = %d", numero, m9, t9);
    printf("\n| %d x %d = %d", numero, m10, t10);
    printf("\n-------------\n");
  }

  printf("\n");
  
  return 0;
}