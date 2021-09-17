#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);
    int len = strlen(str);
    char ans[20];
    int ans_point[20];

    // make a histogram of the frequencies of different characters
    for (int i = 0; i < len; i++) {
        if (str[i] != '~' && str[i] != ' ') {
            char word = str[i];
            int count = 0;
            for (int j = i; j < len + 1; j++) {
                if (str[j] == word) {
                    count += 1;
                    ans[j] = '~';
                    str[j] = '~';
                    ans_point[j] = -1;
                }
            }
            ans[i] = word;
            ans_point[i] = count;
        }
    }

    // sort this histogram
    for (int j = 0; j < len-1; j++) {
        for (int i = 0; i < len-1; i++) {
            if(ans[i] > ans[i + 1]){
                char c = ans[i];
                ans[i] = ans[i+1];
                ans[i+1] = c;
                int c1 = ans_point[i];
                ans_point[i] = ans_point[i+1];
                ans_point[i+1] = c1;
            }
        }
    }

    // print the histogram
    for (int i = 0; i < len; i++) {
        if (ans[i] != '~') {
            printf("%c", ans[i]);
            for (int j = 1; j <= ans_point[i]; j++) {
                printf(".");
            }
            printf("\n");
        }
    }

    return 0;
}