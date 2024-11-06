#include <stdio.h>

void input(int m[3][3]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
}

void sum(int m[3][3])
{
    int i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j)
            {
                sum = sum + m[i][j];
            }
        }
    }
    printf("Sum of all the non-diagonal elements: %d", sum);
}

int main()
{
    // 3x3 Matrix
    int m[3][3];
    clrscr();
    input(m);
    sum(m);
    getch();
    return 0;
}
