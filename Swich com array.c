#include <stdio.h>
enum test {seg, terc, quart, quint, sex, sab, dom};

int main(void)
{
    enum test d1, d2;
    int varDias, num;

    printf("digite o valor de um inteiro: ");
    scanf("%d%*c", &num);

    switch (num){
        case seg: ; 
            printf("Segunda\n"); break;
        case terc: ; 
            printf("Terca\n"); break;
        default:
            printf("Nao e um dia conhecido\n");

    }
}