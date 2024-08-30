#include <stdio.h>

int main()
{
    int r, i, j, k, spaces;
    printf("Row: ");
    scanf("%d", &r);
    spaces=r;
    for (i = 1; i <= r; i++)
    {
        spaces--;
        for (j = spaces; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
