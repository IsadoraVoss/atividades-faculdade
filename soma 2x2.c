/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int A[2][2] = {{1,2},{3,4}};
  int B[2][2] = {{5,6}, {7,8}};
  int soma[2][2];
  int i, j;
  for(i=0; i<2; i++)
  {
      for(j=0; j<2; j++)
      {
         soma[i][j] = A[i][j] + B[i][j]; 
      }
  }
  for(i=0; i<2; i++)
  {
      for(j=0; j<2; j++)
      {
        printf("%d \t", soma[i][j]);
      }
      printf("\n");
  }
 
}
