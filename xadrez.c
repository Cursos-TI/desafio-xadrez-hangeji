#include <stdio.h>

int main(){

    //MOVIMENTAÇÃO TORRE (CINCO CASAS PARA A DIREITA)
        int i = 0;
     
             printf("***MOVIMENTAÇÃO TORRE*** \n");
    while (i< 5) {
        printf("Direita %d \n", i);
        i++;
    }

    
    //MOVIMENTAÇÃO BISPO (CINCO CASAS NA DIAGONAL CIMA/DIREITA)
 
    int j = 0;
               printf("***MOVIMENTAÇÃO BISPO*** \n");
    do
    {
        printf("Cima Direita %d \n", j);
        j++;
    } while (j < 5);
    

    //MOVIMENTAÇÃO RAINHA (OITO CASAS A ESQUERDA)

                printf("***MOVIMENTAÇÃO RAINHA** \n");

    for (int k = 0; k < 8; k++)
    {
       printf("Esquerda %d \n", k);
    }
    

    //MOVIMENTAÇÃO CAVALO (DUAS CASAS PARA BAIXO E UMA PARA ESQUERDA)
  
             printf("***MOVIMENTAÇÃO CAVALO** \n");
    int m = 0;
    
   for (int l=0; l < 1; l++){
    while (m < 2){
    
        printf("Baixo %d \n", m);
        m++;
    }
    printf("Esquerda %d \n", l);

   }

    return 0;
}