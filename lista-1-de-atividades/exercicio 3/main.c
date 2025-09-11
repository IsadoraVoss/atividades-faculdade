/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float distancia, tempo, velocidadeMedia;
   printf("Digite a distancia em km");
   scanf("%f", &distancia);

   printf("Digite o tempo em horas");
   scanf("%f", &tempo);

   velocidadeMedia = distancia/tempo;
   printf("A velocidade = %.2f km/h\n",velocidadeMedia);
   return 0;
}
