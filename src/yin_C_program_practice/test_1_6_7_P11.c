#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        printf("getchar != EOF\n"); // 1-6
        printf("%d\n", EOF); // 1-7
    }

    return 0;
}