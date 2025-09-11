/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*20. Calcule o volume de uma caixa d'água cilíndrica.*/
#include <stdio.h>
#define π  3.14
int main()
{
    float volume, raio_base, altura;
    
    printf("Digite o raio da base e a altura do cilindro para calcular o volume");
    scanf("%f\n ""%f\n", &raio_base, &altura);
    
    volume = π*raio_base*raio_base*altura;
    printf("Volume = %.2f", volume);
}
