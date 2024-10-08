/******************************************************************************

Autor: Pedro e Maria
Data: 29/08/2024
Modulo: Logica de programação
Curso: Eletronica 4.0
Local: INDT

*******************************************************************************/
#include <stdio.h>

int main (void) 
{
   int n1, n2, sum, diff;
   printf("Insira 2 numeros inteiros: ");
   scanf("%d%d%*c", &n1, &n2);
   sum = n1 + n2;
   diff = n1 - n2;
   printf("\nA soma equivale %d, a diferenca equivale %d.\n", sum, diff);
    return 0;
}