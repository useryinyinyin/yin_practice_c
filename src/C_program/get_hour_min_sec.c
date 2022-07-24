#include <stdio.h>

void split_time(int total_sec, int *hour, int *min, int *sec)
{
    *hour = total_sec / 60 / 60;
    *min = total_sec / 60 - (*hour) * 60;
    *sec = total_sec % 60;
}

int main()
{
    int total_sec = 86400;

    int hour, min, sec;

    split_time(total_sec, &hour, &min, &sec);

    printf("time is %02d:%02d:%02d\n", hour, min, sec);

    return 0;
}