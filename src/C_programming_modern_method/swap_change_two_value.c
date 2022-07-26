#include <stdio.h>

void swap(int *i, int *j)
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int i = 2;
    int j = 3;

    printf("i = %d, j = %d\n", i, j);

    swap(&i, &j);

    printf("i = %d, j = %d\n", i, j);

    return 0;
}