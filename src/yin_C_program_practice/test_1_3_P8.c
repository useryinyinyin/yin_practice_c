#include <stdio.h>

int main()
{
    int fahr;

    printf("this is a blank for fahr to celsius: \n");
    for (fahr = 0; fahr <= 300; fahr += 20) {
        printf("fahr:%3d, celsius:%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}