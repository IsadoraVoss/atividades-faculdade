/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int matriz[2][3]={{1,2,3},{4,5,6}};
  int i, j, pares = 0;
  
  for(i = 0; i<2; i++){
      for(j=0; j<3; j++)
      {
          if(matriz[i][j] % 2 == 0)
          {
              pares++;
          }
      }
  }
  printf("Quantidade de elementos pares: %d\n", pares);
  return 0;
}
