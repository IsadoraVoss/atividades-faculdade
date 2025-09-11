/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*22. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada
 dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/
#include <stdio.h>

int main()
{
   float nota1, nota2, media;
   printf("Digite a nota 1:\n Digite a nota2:\n");
   scanf("%f""%f", &nota1, &nota2);
   
   media = (2*nota1+3*nota2)/5;
   
   printf("Media: %f", media);
}
