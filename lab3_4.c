#include <stdio.h>
#include <string.h>

int main()
{
    int input_num = 0;
    scanf("%d", &input_num);
    for (int i = 1; i <= input_num; i++) {
        for (int k = 0; k < input_num - i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");

    }
    return 0;
}
