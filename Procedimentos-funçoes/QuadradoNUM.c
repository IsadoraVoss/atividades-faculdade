#include <stdio.h>
#include <stdlib.h>

int quadrado(int n){
    return n*n;     

}

int main(){
    int num = 4;
    printf("o quadrado de %d = %d\n",num, quadrado(num));
    return 0;
}