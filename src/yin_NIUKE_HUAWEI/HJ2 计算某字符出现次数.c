#include <stdio.h>

int compare(char *str, char character, int count)
{
    int str_len = strlen(str);
    
    for (int i = 0; i < str_len; i++) {
        if (character <= 'z' && character >= 'a') {
            if (str[i] == character || str[i] == character - 32) {
                count++;
            }
        } else if (character <= 'Z' && character >= 'A') {
            if (str[i] == character || str[i] == character + 32) {
                count++;
            }
        } else {
            if (str[i] == character) {
                printf("%c %c\n", str[i], character);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    char str[1024], character;
    int count = 0;
    
    fgets(str, sizeof(str), stdin);
    scanf("%c", &character);
    
    count = compare(str, character, count);
    
    printf("%d\n", count);
    
    return 0;
}