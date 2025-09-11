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
int vetor[TAM]={1, 2, 3 ,4 ,5};
int i;


for(i= TAM-1; i>=0; i--){
    printf("o vetor[%d] tem valor %d\n",i, vetor[i]);
}
return 0;
}
