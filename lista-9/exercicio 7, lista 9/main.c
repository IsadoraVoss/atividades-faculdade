/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int maior_numero(int vet[], int tam)
{
    int maior = vet[0];
    for (int i = 0; i<tam; i++)
    {
        if(vet[i]>maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}

int menor_numero(int vet[], int tam)
{
    int menor = vet[0];
    for(int i = 0; i<tam; i++)
    {
        if(vet[i]< menor)
        {
            menor =  vet[i];
        }
    }
    return menor;
}

int main()
{
    int vet[]= {5, 1 ,9, 3, 7};
    int maior = maior_numero(vet, 5);
    int menor = menor_numero(vet, 5);
    printf("Maior = %d, Menor = %d", maior, menor);
}