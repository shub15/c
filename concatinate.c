#include <stdio.h>

void concat(char s1[100], char s2[100], char s3[100])
{
    char s4[100];
    int len = 0, i = 0, j = 0, k = 0;
   
    // for (int len = 0; s1[len] != '\0'; len++);

    for (i = 0; s1[i] != '\0'; i++, len++)
    {
        s4[i] = s1[i];
    }
    s4[len]='\0';
    for (j = 0; s2[j] != '\0'; j++, len++)
    {
        s4[len] = s2[j];
    }
    s4[len]='\0';
    for (k = 0; s3[k] != '\0'; k++, len++)
    {
        s4[len] = s3[k];
    }
    s4[len]='\0';
    printf("The concatenated string is %s", s4);
}

int main()
{
    char s1[100], s2[100], s3[100];
    clrscr();
    printf("Enter 1st string \n");
    gets(s1);
    printf("Enter 2st string \n");
    gets(s2);
    printf("Enter 3st string \n");
    gets(s3);
    concat(s1, s2, s3);
    getch();
    return 0;
}