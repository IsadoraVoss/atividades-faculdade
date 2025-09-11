/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*23. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre
 esse peso em gramas*/
#include <stdio.h>

int main()
{
    float kg, g;
    printf("Digite kg:");
    scanf("%f", &kg);
    
    g = kg*1000;
    printf("o peso em gramas:%.2f",g);

    return 0;
}
