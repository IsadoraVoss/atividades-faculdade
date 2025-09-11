/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int p, m, g, qp, qm, qg, valor;
    p=10;
    m=12;
    g=15;
    printf("Digite a quantidade de camisetas\np:\nm:\ng:\n", qp,qm,qg);
    scanf("%d", &qp);
    scanf("%d",&qm);
    scanf("%d",&qg);
    valor= qp*p + qm*m + qg*g;
    printf("O valor arrecadado e: %d", valor);
}
