/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
   float x1, y1, x2, y2, distancia;
   printf("Digite as coordenadas x1y1:",x1,y1);
   scanf("%f", &x1);
   scanf("%f",&y1);
   printf("Digite as coordenadas x2y2:", x2,y2);
   scanf("%f",&x2);
   scanf("%f",&y2);
   distancia = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
   distancia= sqrt(distancia);
   printf("A distancia entre dois pontos e: %.2f", distancia);
   
}
