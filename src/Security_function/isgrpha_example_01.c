#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    printf("C 语言中所有图形字符: \n");
    for (i=0;i<=127;++i)
    {
        if (isgraph(i)!=0)
            printf("%c ",i);
    }
    return 0;
}