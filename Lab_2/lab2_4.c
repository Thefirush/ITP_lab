#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("Before exchange: %d %d\n", n, m);
    swap(&n, &m);
    printf("After exchange: %d %d", n, m);
    return 0;
}

