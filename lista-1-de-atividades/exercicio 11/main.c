/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    printf("Digite a n1:\n",n1);
    scanf("%f", &n1);
    printf("Digite a n2:\n",n2);
    scanf("%f", &n2);
    printf("Digite a n3:\n",n3);
    scanf("%f", &n3);
    
    media= (n1+n2*2+n3*3)/6;
    printf("A media ponderada equivale a: %.2f", media);
}
