/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*18. A granja galinha feliz possui um controle automatizado de cada frango da sua
produção. No pé direito do frango há um anel com um chip de identificação; no pé
esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo
que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo
para calcular o gasto total da granja para marcar todos os seus frangos.*/
#include <stdio.h>

int main()
{
    float frango, gasto;
    
    printf("Digite a quantidade de frangos:");
    scanf("%f", &frango);
    
    gasto = (frango *4 + frango * 7);
    printf("O gasto e: %.2f", gasto);
}
