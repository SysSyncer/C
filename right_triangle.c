#include <stdio.h>

void main()
{
    int i, j, row;
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}