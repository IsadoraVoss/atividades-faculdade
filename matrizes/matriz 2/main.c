/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lin, col, letra;

void atribuirNomes(char matriz[lin][col][letra])
{
   
            strcpy(matriz[0][0], "Maria" );
            strcpy(matriz[0][1], "Jose" );
            strcpy(matriz[0][2], "Alice" );
            strcpy(matriz[0][3], "Bill Gates" );
            strcpy(matriz[0][4], "Arthur" );
            strcpy(matriz[1][0], "Carlos" );
            strcpy(matriz[1][1], "Marcio" );
            strcpy(matriz[1][2], "Adriano" );
            strcpy(matriz[1][3], "Joao" );
            strcpy(matriz[1][4], "Marcelo" );
        
    
}

void mostrarNomes(char matriz[lin][col][letra])
{
    for(int i =0; i<lin; i++)
    {
        printf("\n");
        
        for(int j = 0; j<col; j++)
        {
            printf("\t%-10s", matriz[i][j]);
        }
         
    }
}
int main()
{
  lin = 2;
  col= 5; 
  letra = 100;
 char matriz[lin][col][letra];
 atribuirNomes(matriz);
 mostrarNomes(matriz);
}