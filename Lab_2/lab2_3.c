#include <stdio.h>

void triangle(int n){
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 1; j <  n + i + 1; ++j) {
            if(j <= n - i + 1){
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}
void flag(int n){
    if(n % 2 == 0)
        for (int i = 0; i < n / 2; ++i) {
            for (int j = 0; j <  i + 1; ++j) {
                printf("*");
            }
            printf("\n");
        }
    else
        for (int i = 0; i < n / 2 + 1; ++i) {
            for (int j = 0; j <  i + 1; ++j) {
                printf("*");
            }
            printf("\n");
        }
        for (int i = n / 2; i > 0; --i) {
            for (int j = i + 1; j > 1; --j) {
                printf("*");
            }
            printf("\n");
        }
}
void rectangle(int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 2; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printf("Choose number: 1(triangle), 2(flag), 3(rectangle.)\n");
    int choice, n;
    scanf("%d", &choice);
    printf("Enter the length: \n");
    scanf("%d", &n);
    switch (choice) {
        case 1 :
            triangle(n);
            break;
            case 2 :
                flag(n);
                break;
                case 3 :
                    rectangle(n);
                    break;
    }
    return 0;
}