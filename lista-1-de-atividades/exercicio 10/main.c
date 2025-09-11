/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int qpaes, qbroas;
  float venda;
  printf("Digite a quantidade de paes vendidos:", qpaes);
  scanf("%d", &qpaes);
  printf("Digite a quantidade de broas vendidas:", qbroas);
  scanf("%d", &qbroas);
  venda = (qpaes*0.12)+(qbroas*1.50);
  printf("O valor da venda de paes e broas e:%.2f\n", venda);
  
  float vpoupanca;
  vpoupanca= venda*10/100;
  printf("O valor que deve ser guardado na poupanca e: %.2f\n", vpoupanca);
  return 0;
}
