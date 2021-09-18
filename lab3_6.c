#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char pas_int[3];
    printf("Password = ");
    gets(pas_int);
    int len = strlen(pas_int);
    char pas_out[len];
    int schet = 0;
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 32; j <= 126 ; j++) {
            schet += 1;
            char lett = j;
            if (pas_int[i] == lett) {
                count += 1;
                pas_out[i] = lett;
            }
            if (count == len) {
                printf("Found = ");
                for (int m = 0; m < count; m++) {
                    printf("%c", pas_out[m]);
                }
                printf("\n");
                printf("Number of attempts = %d", schet);
                exit(1);
            }
        }
    }
    // изначальный большой и страшный код (правильный, но не эффективный)
    /*for (int i = 32; i <= 126; i++) {
        for (int j = 32; j <= 126 ; j++) {
            for (int k = 32; k <= 126 ; k++) {
                schet += 1;
                char first = i;
                char second = j;
                char third = k;
                pas_out[0] = first;
                pas_out[1] = second;
                pas_out[2] = third;
                int count = 0;
                for (int pri = 0; pri < len; pri++) {
                    if (pas_int[pri] == pas_out[pri])
                        count += 1;
                }
                if (count == len) {
                    printf("Found = ");
                    for (int m = 0; m < count; m++) {
                        printf("%c", pas_out[m]);
                    }
                    printf("\n");
                    printf("Number of attempts = %d", schet);
                    exit(1);
                }
            }
        }
    }*/

    return 0;
}

