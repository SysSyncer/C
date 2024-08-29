#include <stdio.h>

void main()
{
    int r, c, i, j;

    printf("Row: ");
    scanf("%d", &r);
    printf("Column: ");
    scanf("%d", &c);

    for (i = r; i > 0; i--)
    {
        for (j = c; j > 0; j--)
        {
            if (i == r || i == 1)
            {
                printf("*");
            }
            else
            {
                if (j == c || j == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
