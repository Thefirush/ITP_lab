#include <stdio.h>

void change(int *, int *);

int main() {
    int nums[100];
    int size = 0;
    FILE *in, *out;
    in= fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    fseek(in, 0, SEEK_SET);
    while (1){
        if(fscanf(in, "%X ", nums) == 1)
            size++;
        if(feof(in))
            break;
    }
    printf("%d", size);
    rewind(in);
    for(int i = 0; i < size;i++)
        fscanf(in,"%X",&nums[i]);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(nums[j] > nums[j + 1]){
                change(&nums[j], &nums[j + 1]);
            }
        }
    }
    for(int i = 0; i < size; i++)
        fprintf(out, "%X ",nums[i]);
    fclose(in);
    fclose(out);
    return 0;
}

void change(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}