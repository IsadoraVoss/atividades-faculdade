/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#define TAM 5
/*2. Preenchendo um vetor com entrada do usuário. Peça ao usuário para preencher 
um vetor de 5 posições e exiba os valores digitados.*/

int main()
{
setlocale(LC_ALL,"Portuguese");
    int Vetores[TAM], i;
    
    for(i=0; i<TAM; i++){
        printf("Digite o valor para a posição %d do vetor", i);
        scanf("%d", &Vetores[i]);
        
    }
    ("\n\n");
    for(i=0; i<TAM; i++){
        printf("Vetor[%d] tem valor %d\t", i, Vetores[i]);
        
    }
    return 0;
}