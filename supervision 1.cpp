#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;
    int number;

    even_file = fopen("even_numbers.txt", "w");
    if (even_file == NULL) {
        fprintf(stderr, "Error opening even_numbers.txt for writing.\n");
        return 0;
    }

   
    odd_file = fopen("odd_numbers.txt", "w");
    if (odd_file == NULL) {
        fprintf(stderr, "Error opening odd_numbers.txt for writing.\n");
        fclose(even_file); // Close even_file before exiting
        return 0;
    }

    for (number = 50; number <= 70; number++) {
        if (number % 2 == 0) {
            fprintf(even_file, "%d\n", number);
        } else {
            fprintf(odd_file, "%d\n", number);
        }
    }

    fclose(even_file);
    fclose(odd_file);

    return 0;
}
