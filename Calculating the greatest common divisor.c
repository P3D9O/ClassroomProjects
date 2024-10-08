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
   long int n1, n2, x, y, remainder;
   printf("Calculo do maior divisor comum. \n ");
   printf("Insira 2 numeros inteiros positivos: ");
   scanf("%ld%ld%*c", &n1, &n2);
   
   if (n1 < n2)
   {
    x = n1;
    y = n2;
    
       
   }
   else
  {
      x=n2;
      y=n1;
      
  }
   
   remainder = x;
   
   while(remainder != 0)
   {
       remainder = y % x;
       y = x;
       x = remainder;
   }
   
   printf("\ngcd(%ld, %ld) = %ld \n", n1, n2, y);
   return 0;
   

}