#include <stdio.h>

int main()
{
    int i = 1;
    int j = 2;
    int *p, *q;
    
    p = &i;
    q = &j;
    
    // 1. 将p指向的值复制到q指向的对象中
    // *q = *p;

    // 2. 指针赋值
    p = q;

    printf("%d, %d\n", *p, *q);

    return 0;
}