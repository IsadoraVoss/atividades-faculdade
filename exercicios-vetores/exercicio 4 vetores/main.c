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
setlocale(LC_ALL, "Portuguese");
int vetor[TAM] = {20, 78, 99, 100, 292};
int i, maior=0;

for(i=0; i<5; i++){
   if(vetor[i]> maior){
       maior=vetor[i];
   }

}
printf("O maior valor é %d", maior);
}
