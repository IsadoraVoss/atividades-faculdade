/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//1. Criando e exibindo um vetor. Crie um vetor de 5 posições e exiba seus valores.
int main()
{
   int fofinho[5];
   fofinho[0]=0 ;
   fofinho[1]=1 ;
   fofinho[2]=2; 
   fofinho[3]=3 ;
   fofinho[4]=4;
   printf("Valores fofinhos:\n");
   for(int i = 0; i<5; i++)
{
     printf("Os valores fofinhos são:fofinho[%d]=%d\n", i , fofinho[i]);  
} 
   
  return 0;
   
}