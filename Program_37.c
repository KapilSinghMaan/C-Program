// Program to print Simple Pyramid Pattern.

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    getch();
}