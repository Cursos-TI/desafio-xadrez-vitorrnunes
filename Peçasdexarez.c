#include <stdio.h>


//Codigos de movimentação da RAINHA
void moverrainha(int casas){
   if (casas > 0)
   {
    printf("Esquerda\n");
    moverrainha(casas - 1);
   }
}

// Codigos de movimentaçâo da TORRE
void movertorre(int casas){
    if (casas > 0)
    {
     
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

int main(){

    //MOVIMENTO DE LOPS ALINHADOS
    int i = 0;
    int j, movimentoeml = 1;


    while (i <= 11) // MOVIMENTAÇÃO DO BISPO
    {
      if (i % 2 == 0)
      {
        printf("cima\n", i);
      }else
      {
        printf("direita\n", i);
      }
      
      i++;
    }printf("O bispo se movimentou\n");
    

    printf("\n");


  while (movimentoeml--) // Movimentação em L do cavalo
  {
    for (i = 0; i <= 1 ; i++)
    {
      printf("baixo\n");
    }
    printf("Esquerda\n");
  }printf("o Cavalo se movimentou\n");
  
 printf("\n");
    
    
    //MOVIMENTO RECURSIVO
movertorre(5);    //QUANTIDADE DE MOVIMENTOS DA TORRE
printf("A Torre se movimentou\n");
     
  printf("\n");    
     
     
moverrainha(8);   //QUANTIDADE DE MOVIMENTOS DA RAINHA
printf("A Rainha se movimentou\n");   
     
     
     
     
     return 0;





}
