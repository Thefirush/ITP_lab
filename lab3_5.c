#include <stdio.h>

int factorial(int a) {
    int b = 1;
    for (int i = 1; i <= a; i++) {
        b *= i;
    }
    return b;
}
int strong_num(int f) {
    int sum = 0;
    int len = 0;
    int b = f;
    while ( b != 0 ) {
        int k = 0;
        int fact = b % 10;
        b /= 10;
        k = factorial(fact);
        sum += k;
    }
    if (sum == f)
        return 1;
    else
        return 0;
}
int main() {
    int from, to;
    printf("Starting range of number: ");
    scanf("%d", &from);
    printf("Ending range of number: ");
    scanf("%d", &to);
    printf("\n");
    printf("The strong numbers are: ");
    for (from; from <= to ; from++) {
        if (strong_num(from) == 1)
            printf("%d, ", from);
    }
    return 0;
}