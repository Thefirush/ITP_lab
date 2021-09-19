#include <stdio.h>
#include <string.h>

int lengthchar(char *str1){
    int len = 0;
    while (*str1++)
        len++;
    return len;
}

int main(){
    char str[20];
    printf("Enter string: ");
    gets(str);
    printf("Length = %d\n", lengthchar(str));
    return 0;
}