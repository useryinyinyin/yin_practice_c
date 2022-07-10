#include<stdio.h>
#define MAX_STR_LEN 5000

int main() {
    char str[MAX_STR_LEN];
    int count = 0;
    
    gets(str);
    int len = strlen(str);
    
    for (; str[len - 1] != ' '; len--) {
        if (len == 0) {
            break;
        } else {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}