#include <stdio.h>
#include <string.h>

int main()
{
    char inum[20];
    gets(inum);
    int count = 0;
    int len = strlen(inum);

    for (int i = 0; i < len; i++) {
        if (inum[i] != '~') {
            char digit = inum[i];
            for (int j = i+1; j < len + 1; j++) {
                if (inum[j] == digit) {
                    inum[j] = '~';
                    count += 1;
                }
            }
        }
    }

    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (inum[j] == '~') {
                char c = inum[j];
                inum[j] = inum[j+1];
                inum[j+1] = c;
            }
        }
    }

    for (int i = 0; i <= len-count; ++i) {
        printf("%c", inum[i]);
    }

    return 0;
}