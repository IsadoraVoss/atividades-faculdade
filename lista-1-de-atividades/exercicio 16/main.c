/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float celsius, fahrenheit;
printf("Digite uma temperatura em celsius:");
scanf("%f", &celsius);

fahrenheit = (celsius * 1.8)+ 32;
printf("A temperatura em fahrenheit: %.2f", fahrenheit);
return 0;
}