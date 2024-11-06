#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    scanf("%d", &size);
    int *ptr = (int *)malloc(size * sizeof(int));
    int *p = ptr;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        printf("%d", *p);
        p++;
    }

    printf("%d", *ptr);
    return 0;
}