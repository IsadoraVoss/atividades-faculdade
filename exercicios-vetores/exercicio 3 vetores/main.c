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
  int vetores[TAM]= {10,9,8, 7, 6};
  int i, soma=0;
  for(i=0; i<5; i++){
     soma+=vetores[i];
  }
    printf("A soma é = %d", soma);
    return 0;
}
