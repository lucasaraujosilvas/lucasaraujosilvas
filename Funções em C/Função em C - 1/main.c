#include <stdio.h>

void mmc(int v1,int v2,int *resp){
  
  int cont=2,dividiu,resposta=1;
  
  while (v1!=1 || v2!=1){
    
    dividiu=0;
    
  if (v1%cont==0){
    
    dividiu=1;
    
    v1=v1/cont;
  
  }
  
  if (v2%cont==0){
    
    dividiu=1;
    
    v2=v2/cont;
  
  }
  
  if (dividiu==0){
    
    cont++;
    
  } else {
    
      resposta=resposta*cont;
    
  }
    
  } 
  
    *resp=resposta; 
  
  }

main(void){

  printf("\n");
  
  int x,y,r;
  
  printf("Digite o primeiro número: ");
  scanf("%d",&x);
  
  printf("Digite o último número: ");
  scanf("%d",&y);
  
  mmc(x,y,&r);

  printf("|\n");
  
  printf("MMC: %d \n ",r);

  printf("\n");
  
}