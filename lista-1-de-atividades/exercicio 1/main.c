/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Lista de atividades
Autora: Isadora Voss Brugnera
Algoritmos I- primeira fase
*/

#include <stdio.h>
#include <locale.h>
// atividade 1
int main()
{
    float NumeroReal, metade;
    printf("Digite um numero real e descubra sua metade");
    scanf("%f", &NumeroReal);
    metade = NumeroReal/2;
    printf("/n a metade dele equivale a : %f/n", metade);
}
