#include <stdio.h>

// replace string of blanks with a single blank
int main()
{
    int c, lastc;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else if (lastc != ' ') {
            putchar(c);
        }
        lastc = c;
    }

    return 0;
}