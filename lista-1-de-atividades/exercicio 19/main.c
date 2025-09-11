/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*19. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um algoritmo para ler os dados necessários
e calcular a altura do prédio.*/

#include <stdio.h>

int main()
{
    float minha_sombra = 5, minha_altura= 1.75, sombra_predio= 85, altura_predio;
    
    altura_predio = (minha_altura*sombra_predio)/(minha_sombra);
    printf("%.2f", altura_predio);
    
    
}
