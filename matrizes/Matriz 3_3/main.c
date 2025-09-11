/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//inicializar e imprimir uma matriz 3*3;
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;
    //preenchendo numeros de 1 a 9
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            matriz[i][j] = i*3 + j+ 1; //atribui valor
        }
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
