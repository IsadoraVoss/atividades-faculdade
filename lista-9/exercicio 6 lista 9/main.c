/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//6: contar pares e impares
int main()
{
   int vet[] = {8, 9, 10, 11, 12};
   int cont_par, cont_impar;
   int i =0;
   while( i<5)
   {
       if(vet[i] % 2 == 0)
       {
           cont_par++;
       }
       else
       {
           cont_impar++;
       }
       i++;
   }
   printf("Quantidade par: %d \nQuantidade impar: %d\n", cont_par, cont_impar);
    return 0;
}