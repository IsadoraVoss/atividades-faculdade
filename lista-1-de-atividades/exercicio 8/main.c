/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//exercicio 8

int main()
{
int valor, n10, n5, n1;

printf("Qual o valor a sacar", valor);
scanf("%d", &valor);

n10 = valor/10;
valor= valor% 10;
n5= valor/5;
n1= valor% 5;

printf("\n Você irá precisar:");
printf("\n\t %d x 10,00", n10 );
printf("\n\t %d x 5,00", n5);
printf("\n\t %d x 1,00\n", n1);
}
