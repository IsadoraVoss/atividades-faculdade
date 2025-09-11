/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int matriz[2][2] = {{2,4}, {6,8}};
   int i, j, soma = 0;
   float media;
   
   for(i = 0; i<2; i++)
  {
      for(j=0; j<2; j++){
          soma+=matriz[i][j];
      }
  } 
  
  media = soma/4;
  printf("Media: %.2f\n", media);
    
}
