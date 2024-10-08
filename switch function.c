
#include <stdio.h>
int main (void)
{

    char letra;
    printf("Insira uma letra MAIUSCULA: ");
    scanf("%c%*c", &letra);

    switch (letra)
    {
        case 'A':
             printf("Argentina\n");
            break;
       case 'B':
             printf("Brasil\n");
            break;
        case 'H':
             printf("Honduras\n");
            break;
        case 'M':
             printf("Mexico\n");
            break;
        case 'P':
             printf("Peru\n");
            break;
        default:
             printf("Pais desconhecido\n");
            break;
    }
 
}