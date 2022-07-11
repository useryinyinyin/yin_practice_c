#include <stdio.h>

// replace tabs and backspaces with visible characters
int main()
{
    int c;

    while ((c = getchar() ) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else if (c != '\b') {
            if (c != '\t') {
                if (c != '\\') {
                    putchar(c);
                }
            }
        }
    }

    return 0;
}