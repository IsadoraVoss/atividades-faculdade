/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int matriz[2][2]={{1,2}, {3,4}};
   int i, j;
   for(i=0; i<2; i++)
   {
       for(i=0; i<2; i++)
       {
           matriz[i][j]*=2;
       }
   }
   for(i=0; i<2; i++)
   {
       for(i=0; i<2; i++)
       {
           printf("%d", matriz[i][j]);
       }
       printf("\n");
   }
}
