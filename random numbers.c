#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    //srand(time(null));
    for(i = 0; i < 10; i++)
    {
        printf("%4ld", rand() % 100 + 1 );
    }
    return 0;

}
