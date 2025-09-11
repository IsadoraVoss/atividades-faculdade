/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 24. Faça um algoritmo que calcule e mostre a área de um trapézio*/
#include <stdio.h>

int main()
{   int B, b, H, Area;
    printf("Digite o tamanho da base maior:\n");
    printf("Digite o tamanho da base menor:\n");
    printf("Digite o tamanho da altura:\n");
    scanf("%d""%d""%d",&B, &b, &H);
    Area = (B+b)*H/2;
    printf("Area = %d", Area);
    return 0;
}
