#include <stdio.h>

int main() {
    char str[10000];
    printf("Enter your text: ");
    gets(str);
    FILE *file = fopen("str.txt", "w");
    fprintf(file, "%s", str);
    fclose(file);
    return 0;
}