/******************************************************************************

Welcome https://www.onlinegdb.com/profile/to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//Determinante de uma matriz 2x2 

/*a b
  c d */
  int determinante(int m[2][2])
{
    return m[0][0]*m[1][1]-m[0][1]*m[1][0];
}
  int matriz [2][2] = 
 { 
{2,4},
{3,8}
 };
  printf("Determinante da matriz : %d\n", determinante(matriz));
}