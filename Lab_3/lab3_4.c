#include <stdio.h>
#include <string.h>

int main()
{
    int input_num = 0;
    scanf("%d", &input_num);
    int nout = 1;
    for (int i = 1; i <= input_num; i++) {
        for (int j = 1; j < input_num + i + 1; j++) {
            if (j <= input_num - i + 1){
                printf(" ");
            } else {
                printf("%d", nout);
                nout += 1;
            }
        }
        printf("\n");
    }
    return 0;
}
