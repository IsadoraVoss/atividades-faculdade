/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i;
    
    printf("Diagonal principal:\n");
    
    for(i = 0; i<3; i++)
    {
        printf("%d\t", matriz[i][i]);
        
    }
    printf("\n");
    return 0;
}
