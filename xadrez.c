#include <stdio.h>

int main(){

    //MOVIMENTAÇÃO TORRE (CINCO CASAS PARA A DIREITA)
        int t = 0;
     
             printf("***MOVIMENTAÇÃO TORRE*** \n");
    while (t< 5) {
        printf("Direita %d \n", t);
        t++;
    }

    
    //MOVIMENTAÇÃO BISPO (CINCO CASAS NA DIAGONAL CIMA/DIREITA)
 
    int b = 0;
               printf("***MOVIMENTAÇÃO BISPO*** \n");
    do
    {
        printf("Cima Direita %d \n", b);
        b++;
    } while (b < 5);
    

    //MOVIMENTAÇÃO RAINHA (OITO CASAS A ESQUERDA)

                printf("***MOVIMENTAÇÃO RAINHA** \n");

    for (int r = 0; r < 8; r++)
    {
       printf("Esquerda %d \n", r);
    }
    

    return 0;
}