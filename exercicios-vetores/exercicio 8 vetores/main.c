/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 5
int main()
{
    setlocale(LC_ALL,"Portuguese");
int vetor[TAM]= {1, 10, 100, 1000, 222};
int i, vetorUsuário;

  printf("Adivinhe se o número está dentro do vetor?");
  scanf("%d",&vetorUsuário);
  
for(i=0; i<TAM; i++)
{
  if(vetor[i] == vetorUsuário)
  {
      printf("O número %d está dentro do vetor!", vetorUsuário);
  }
}

return 0;
}
