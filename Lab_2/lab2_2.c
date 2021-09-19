#include <stdio.h>

void triangle(int n){
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j <  n + i + 1; ++j) {
            if(j <= n - i + 1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    triangle(n);
    return 0;
}