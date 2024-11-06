#include <stdio.h>

void input(int m[][10], int row, int column)
{
    int i, j;
    printf("\nEnter elements: \n");

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void multi(int m1[][10], int m2[][10], int result[][10],
           int r1, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void display(int result[][10], int row, int column)
{
    int i, j;
    printf("\nOutput Matrix:\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[10][10], m2[10][10], result[10][10], r1, c1, r2, c2;
    printf("Matrix 1 rows and columns: ");
    scanf("%d %d", &r1, &c1);
    printf("Matrix 2 rows and columns: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error! Enter rows and columns again.\n");
        printf("Matrix 1 rows and columns: ");
        scanf("%d%d", &r1, &c1);
        printf("Matrix 2 rows and columns: ");
        scanf("%d%d", &r2, &c2);
    }

    input(m1, r1, c1);

    input(m2, r2, c2);

    multi(m1, m2, result, r1, c1, c2);

    display(result, r1, c2);

    return 0;
}