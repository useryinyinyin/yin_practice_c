#include <stdio.h>

// 输出图形
// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU
// U
// V
// W
// X
// Y
// Z
int main()
{
    int count = 1, thres = 1;

    for (char c = 'A'; c <= 'Z'; ++c) {
        if (count < thres && thres <= 6) {
            count++;
            printf("%c",c);
        } else if (count == thres){
            thres++;
            count = 1;
            printf("%c\n", c);
        }

        if (thres > 6) {
            printf("%c\n", c);
        }
    }

    return 0;
}