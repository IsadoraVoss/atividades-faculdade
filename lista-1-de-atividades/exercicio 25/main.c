/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 25. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre
 o valor da hipotenusa*/
#include <stdio.h>
#include <math.h>
int main()
{   int catetoOposto, catetoAdjacente, hipotenusa;
    printf("Digite cateto Oposto");
    scanf("%d", &catetoOposto);
    printf("Digite cateto Adjacente");
    scanf("%d", &catetoAdjacente);
    hipotenusa = catetoOposto*catetoOposto+catetoAdjacente*catetoAdjacente;
    hipotenusa = sqrt(hipotenusa);
    printf("hipotenusa = %d", hipotenusa);

    return 0;
}
