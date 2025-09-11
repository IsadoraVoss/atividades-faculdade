/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 5
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor[TAM] = {2, 5, 8, 10, 12};
    int i, multiplicando;
    for(i=0; i<TAM; i++){
       multiplicando= vetor[i]*2;
        printf("O vetor[%d] multiplicado por 2 é %d\n ",i,  multiplicando);
       }
      
    return 0;
}