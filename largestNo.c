#include<stdio.h>
#include<conio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    // n1=1;
    // n2=2;
    // n3=3;
 
    n1>n2?(n1>n3?printf("%d is the largest num", n1):n3):n3;
    n2>n3?(n2>n1?printf("%d is the largest num", n2):n1):n1;
    n3>n2?(n3>n1?printf("%d is the largest num", n3):n1):n1;
    
    return 0;
}