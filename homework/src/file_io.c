#include <stdio.h>
#include "file_io.h"

int read_numbers(const char *filename, int *numbers, int max_count) {
    FILE *file = fopen(filename, "r");
    if (!file) return -1;

    int count = 0;
    while (count < max_count && fscanf(file, "%d", &numbers[count]) == 1) {
        count++;
    }

    fclose(file);
    return count;
}

int write_result(const char *filename, float result) {
    FILE *file = fopen(filename, "a");
    if (!file) return -1;

    fprintf(file, "%.2f\n", result);
    fclose(file);
    return 0;
}
