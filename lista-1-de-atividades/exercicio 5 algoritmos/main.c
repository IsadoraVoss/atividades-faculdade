/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*Exercicio 5 
autora: Isadora Voss Brugnera
Algoritmos I 
 Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
 algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
 carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
 informar qual o valor em R$ a ser gasto com combustível na viagem
 */

int main()
{
  float distancia, consumo,litro, preço, valor;
 printf("Qual é a distncia percorrida em km?", distancia);
 scanf("%f",&distancia);
 
 printf("Quantidade de litros gasta:", litro);
 scanf("%f", &litro);
 
 consumo= distancia/litro;
 printf("Qual o consumo em km/L? %.2f km/L", consumo);

 printf("Qual o preço do litro do combustível?", preço);
 scanf("%f",&preço);
 
 valor=consumo*preço;
 printf("O valor gasto na viagem = %.2f consumo*preço", valor);
 return 0;
 
}
