/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

#define TAM 5
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor[TAM] = {2, 5, 8, 10, 12};
    int i;
    for(i=0; i<TAM; i++){
        if (vetor[i]%2==0){
        printf("O número de valores pares é %d", i); 
        }
    }
    return 0;
}