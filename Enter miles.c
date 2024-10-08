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
    float km, miles;
    printf("Insira o numero de milhas: ");
    scanf ("%f%*c", &miles);
    km = miles * 1.609;
    printf("%f milhas equivale a %f quilometros\n", miles, km);
    return 0;
}