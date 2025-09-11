/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float salario, aumento, final;
   printf("Digite o salario inicial:", salario);
   scanf("%f", &salario);
   aumento= salario*15/100+salario;
   printf("O salario com aumento de 15% :%.2f\n", aumento);
   final=aumento- aumento*8/100;
   printf("O salario final com desconto:%.2f\n", final);
   return 0;
}
