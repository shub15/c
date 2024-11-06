#include <stdio.h>

int main()
{
    int i, j, rows;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (int n = 0; n < rows - i; n++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}