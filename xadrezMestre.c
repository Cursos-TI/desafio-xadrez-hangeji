#include<stdio.h>

void moverTorre(int casas){
  if (casas > 0){
    printf("Direita %d \n", casas);
    moverTorre(casas - 1);
  }
}

void moverRainha(int casas){
  if (casas > 0){
    printf("Esquerda %d \n", casas);
    moverTorre(casas - 1);
  }
}

void moverBispo(int casas) {
  for (int i = 0; i < 1; i++) {     
        for (int j = 0; j < 1; j++) { 
     if (casas > 0){
    printf("Cima direita %d \n", casas);
    moverBispo(casas - 1);}

     }
    }
}
    
    



int main(){

    printf("***MOVIMENTAÇÃO TORRE*** \n");
moverTorre(5);
    printf("\n");

    printf("***MOVIMENTAÇÃO RAINHA** \n");
moverRainha(8);
    printf("\n");

    printf("***MOVIMENTAÇÃO BISPO*** \n");
moverBispo(5);
    printf("\n");

return 0;
}