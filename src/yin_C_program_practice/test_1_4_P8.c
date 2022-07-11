#include <stdio.h>

int main()
{
    int celsius;

    printf("this is a blank for celsius to fahr:\n");
    for (celsius = 20; celsius <= 300; celsius += 20) {
        printf("fahr = %6.1f, celsius = %3d\n", (9.0 * celsius) / 5.0 + 32, celsius);
    }

    return 0;
}