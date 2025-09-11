/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Matrizes exercicio 1
#include <stdio.h>
#include <stdlib.h>
void solicitarNotas(float matrizNotas[][4])
{
    int linha, coluna;
    for (linha = 0; linha <2; linha++)
    {
        for(coluna = 0; coluna<3; coluna++)
        {
            printf("\n Para o aluno %d informe a nota %d:", linha+1, coluna+1);
            scanf("%f", &matrizNotas[linha][coluna]);
        }
        matrizNotas[linha][3] = (matrizNotas[linha][0]+ matrizNotas[linha][1]+matrizNotas[linha][2])/3;
    }
}
void mostrarNotas(float matrizNotas[][4])
{
    int linha, coluna;
    
    for(linha = 0; linha <2; linha++)
    {
        printf("Nota do aluno %d:\n", linha+1);
        
        for(coluna = 0; coluna<3; coluna++)
        {
            printf("%.2f\t", matrizNotas[linha][coluna]);
        }
        printf("Media final: %.2f\n", matrizNotas[linha][3]);
    }
}
int main()
{
 
 float matrizNotas[2][4];
 solicitarNotas(matrizNotas);
 mostrarNotas(matrizNotas);
 return 0;
    
}