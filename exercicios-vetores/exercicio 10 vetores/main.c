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
int vetor[TAM] = {1, 3, 10, 30, 50};
int i, contando;
for(i=0; i<TAM; i++){
  if(vetor[i]> 10){
      contando++;
  }  
}
printf("A quantidade de valores maiores que 10 é %d", contando);
}
