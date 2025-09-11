/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/* Atividade 4
autora: Isadora Voss Brugnera
Algoritmos I 
 Faça um algoritmo que recebe dois valores representando as medidas da base e da
 altura de um triângulo qualquer e exiba a área deste triângulo
*/

int main()
{
    float base, altura, area;
printf("Digite o valor da base do triângulo", base);
scanf("%f", &base);

printf("Digite o valor da altura do triângulo,", altura);
scanf("%f", &altura);

area= base*altura/2;
printf("/n a area do triângulo = %.2f ", area);
return 0;


}