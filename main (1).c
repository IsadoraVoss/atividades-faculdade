/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int det(int m[3][3])
{
    return m[0][0]*(m[1][1]*m[2][2]- m[1][2]*m[2][1])-m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
}

int main()
{
    //Det 3x3
    int matriz[3][3]=
    {
        {2,5,3},
        {1,-2,-1},
        {3,6,4}
        
    };
    
    printf("Determinente da matriz:%d",det(matriz));

}
