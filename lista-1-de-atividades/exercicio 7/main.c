/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/* Exercicio 7: Leia dois valores para as variC!veis A e B, e efetue a troca dos valores de forma que a
 variC!vel A passe a ter o valor da variC!vel B e que a variC!vel B passe a ter o valor da
 variC!vel A. Ao final, exiba os resultados. Obs.: deverC#o ser feitos dois algoritmos: no
 primeiro poderC! ser usada uma terceira variC!vel. No segundo somente as variC!veis A e
 B
 */
int main()
{
	int A, B;
	printf("digite o valor de A:", A);
	scanf("%d", &A);
	printf("digite o valor de B:", B);
	scanf("%d", &B);

	printf("O valor de A=%d\n", B);
	printf("o valor de B=%d\n", A);
	return 0;
}
