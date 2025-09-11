/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define TAM 5
int main()
{
    int vet[] = {1, 2, 3, 4, 5};
    int soma = 0;
    int i;
for(i=0; i<TAM; i++)
{
    if(vet[i] % 2 == 0)
    {
        soma+=vet[i];
    }
}

printf("%d", soma);
}