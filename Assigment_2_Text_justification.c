#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Open files.
    FILE *in, *out;
    in= fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    int num_words = 1, len_str = 0, n = 0, count = 0, len_word = 0, count_res = 0;
    char text[100], words[100][100], spaces[100], output[100][100], s[100], letter;
    fgets(text, 100, in);
    fscanf(in, "%d", &len_str);
    for (int i = 0; i < 100; i++) // Filling the array with zeros.
        spaces[i] = 0;

    // Find out how many words are in the given line.
    for (int i = 0; i < strlen(text); ++i) {
        if (text[i] == ' ')
            num_words += 1;
    }

    //Add words to the array.
    rewind(in);
    for (int i = 0; i < num_words; ++i) {
        fscanf(in, "%s", &words[i]);
    }

    rewind(in);
    // Checking each word to see if it needs to be added to the result string or add a space to it.
    while(n < num_words){
        len_word += strlen(words[n]);
        if(len_word + count > len_str){
            int i = 0;
            len_word -= strlen(words[n]);
            // Find out how many spaces are needed.
            while(len_word < len_str){
                if(count == 1){
                    spaces[0] += 1;
                    len_word += 1;
                } else {
                    spaces[i % (count - 1)] += 1;
                    len_word += 1;
                    i += 1;
                }
            }
            output[count_res][0] = '\0';
            for(i = 0; i < count; i++){
                strcat(output[count_res], words[s[i]]); // Append word to the result array.
                for(int j = 0; j < spaces[i]; j++){
                    strcat(output[count_res], " "); // Append spaces to the result array.
                }
            }

            fprintf(out, "%s\n", output[count_res]); // Output the resulting string to the output file.

            // Clearing data for a new check.
            for (i = 0; i < 100; i++)
                spaces[i] = 0;
            count = 0;
            len_word = strlen(words[n]);
            count_res += 1;
        }
        s[count] = n;
        count += 1;
        n += 1;
    }
    // Work with last line with special conditions.
    for (int i = 0; i < count - 1; i++) {
        spaces[i] += 1;
        len_word += 1;
    }

    while(len_word < len_str) {
        spaces[count - 1] += 1;
        len_word += 1;
    }

    output[count_res][0] = '\0';

    for(int i = 0; i < count; i++){
        strcat(output[count_res], words[s[i]]);
        for(int j = 0; j < spaces[i]; j++)
            strcat(output[count_res], " ");
    }

    fprintf(out, "%s", output[count_res]); // Output last resulting string to the output file.

    fclose(in);
    fclose(out);
    return 0;
}