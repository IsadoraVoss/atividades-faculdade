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
int vetor[TAM]= {1, 2, 3 , 4 ,5};
int i;
int novo_vetor[TAM];

for(i=0; i<TAM; i++){
    novo_vetor[i] = vetor[i];
    printf("Os valores do vetor antigo são %d\n", vetor[i]);
    printf("\n");
   printf("Os valores do novo vetor são %d\n", novo_vetor[i]); 
}

return 0;
}