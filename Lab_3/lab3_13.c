#include<stdio.h>
int main()
{
    char text1[20], text2[20];
    char *str1 = text1;
    char *str2 = text2;
    printf("Enter any string: ");
    gets(text1);
    while(*(str2++) = *(str1++));
    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    return 0;
}