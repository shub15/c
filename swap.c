#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter two num: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("Num after swapping: %d %d", n1, n2);
    return 0;
}