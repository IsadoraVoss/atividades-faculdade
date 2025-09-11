/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int matriz [2][3] = {{3,9,1}, {7,2,6}};
 int i, j;
 int maior = matriz[0][0];
 
 for(i=0; i<2; i++)
 {
     for(j=0; j<3; j++)
    {
        if(matriz[i][j]>maior)
        {
            maior = matriz[i][j];
        }
    }
 }
 printf("Maior elemento: %d\n", maior);
 return 0;
}
