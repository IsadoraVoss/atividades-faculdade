/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*Exercicio 6-Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
 porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
 aumento.
 */
 int main()
 {
 int salario, aumento, salario_novo;
 printf("Digite o valor do seu salário:\n");
 printf("Digite a porcentagem do seu aumento:\n");
 scanf("%d", &salario);
 scanf("%d",&aumento);
 aumento= salario*aumento/100;
 salario_novo= salario+aumento;
 printf("O novo salário=%d", salario_novo);
 }
