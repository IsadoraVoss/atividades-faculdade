/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int comprimento, largura, area;
    printf("Digite o valor do comprimento do terreno\n", comprimento);
    printf("Digite o valor da largura do terrreno\n", largura);
    scanf("%d", &comprimento);
    scanf("%d", &largura);
    
    area= comprimento*largura;
    printf("\n A area do terreno equivale a: %d metros quadrados", area);
    
    return 0;
}
