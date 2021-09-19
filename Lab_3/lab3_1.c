#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != ' ') {
            char word = str[i];
            int count = 0;
            for (int j = i; j < len + 1; j++) {
                if (str[j] == word) {
                    count += 1;
                    str[j] = '0';
                }
            }
            printf("%c", word);
            for (int i = 0; i < count; i++)
                printf(".");
            printf("\n");
        }
    }
    return 0;
}
