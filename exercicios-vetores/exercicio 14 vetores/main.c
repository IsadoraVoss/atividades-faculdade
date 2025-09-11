/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 10
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int notas[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, maior=0, segunda_maior;
    
    for(i=0; i<TAM; i++)
    {
        if(notas[i]>maior){
            segunda_maior=maior;
            maior=notas[i];
        }
        else if(notas[i]> segunda_maior && notas[i]<maior){
            segunda_maior = notas[i];
        }
    }
     printf("A segunda maior nota é %d",segunda_maior);
}