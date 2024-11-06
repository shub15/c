#include <stdio.h>

int main() {
    int n1, n2, n3;
	clrscr();
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if (n1 > n2) {
        if (n1 > n3)
            printf("%d is the largest num", n1);
        else
            printf("%d is the largest num", n3);
    }
    else {
        if (n2 > n3)
            printf("%d is the largest num", n2);
        else
            printf("%d is the largest num", n3);
    }
	getch();
    return 0;
}