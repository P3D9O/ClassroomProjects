#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50
#define LEN 20

int ReadList (char[] [LEN]);
void ReadName (char[]);
int Find (char[] [LEN], int, char[]);

int main (void)

{
    char matrix [MAX] [LEN];
    char name [LEN];
    int size, result;

    // read the list of names
    size = ReadList (matrix);

    //read te name to be found
    ReadName (name);

    // Look for name in the list 
    result = Find (matrix, size, name);

    if (result >= 0)
        printf ("the name \"%s\" was found at place %d. \n", name, result+1);
    else 
        printf ("the name \"%s\" was not found. \n", name) ;
    return 0;
}
int readlist (char a[][LEN])
{
    int i = 0;
    char name [LEN];
    printf("Enter name %2d (Enter = end): ", i);
    gets (name);

    while (i < MAX && name[0] != '\0')
    {
        strcpy(a[i], name);
        printf ("Enter name %2d (Enter = end) : ", ++i);
        gets (name) ;
    }
    if (i == MAX)
    {
        printf("Array is full!\n");
        exit (1);
    }
    else
    {
        return i;
    }
}
void Readname (char x[])
{
    printf("Enter the name you want to search for: ");
    gets(x);

}
int Find(char a [][LEN], int n, char b[])
{
    int i;
    for (i = 0; i<n; ++i)
    {
        if (strncmp(a[i], b, LEN) == 0)
                return i;
    }
    return -1;
}