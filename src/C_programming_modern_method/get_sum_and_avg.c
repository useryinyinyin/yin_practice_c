#include <stdio.h>

void avg_sum(double a[], int n, double *sum, double *avg)
{
    *sum = 0.0;

    for (int i = 0; i < n; i++) {
        *sum += a[i];
    }

    *avg = *sum / n;
}

int main()
{
    double sum, avg;
    double a[3] = { 1, 2, 3 };

    avg_sum(a, 3, &sum, &avg);

    printf("sum: %.2lf\n", sum);
    printf("avg: %.2lf\n", avg);

    return 0;
}