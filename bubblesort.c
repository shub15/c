#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10] = {1, 2, 5, 8, 4, 9, 7, 3, 6, 0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                if (a[j] > a[k])
                {
                    int temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
