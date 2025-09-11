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
int vetor[TAM] = {1, 2, 3, 4, 5};
int i;
printf("Digite um valor de 1-5 e descubra sua posição");
scanf("%d", &vetor[i]);

for(i=0; i<TAM; i++){
 printf("A posição do valor[%d] é %d",vetor[i], i);
}
return 0;
}
