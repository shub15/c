#include <stdio.h>

int main()
{
    FILE *a = fopen("a.txt", "w");
    FILE *b = fopen("b.txt", "w");
    char ch;
    char str[100] = "Hello world";
    while (str != NULL)
    {
        fputs(str, a);         
    }
    

    while (fgetc(a) != EOF)
    {
        ch = fgetc(a);
        fputc(ch, b);
    }

    printf("%s", a);
    return 0;
}