/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*17. A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
determinado funcionário. Considere que o salário líquido é igual ao salário bruto
descontando-se 10% de impostos.*/
#include <stdio.h>

int main()
{
float salario_bruto, salario_liquido, hora_normal, hora_extra;

printf("Digite quantas horas normais voce trabalhou:");
scanf("%f",&hora_normal);

printf("Digite quantas horas extras voce trabalhou:");
scanf("%f",&hora_extra);

salario_bruto = (10*hora_normal)+(15*hora_extra);
salario_liquido = (salario_bruto*0.10) + salario_bruto;

printf("O salario bruto é :%.2f\n O salario liquido é: %.2f ", salario_bruto, salario_liquido);

}
