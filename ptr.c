#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;
    int *ptr = &n;

    printf("%d", ptr);
    return 0;
}