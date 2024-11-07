#include <stdio.h>
#include "file_io.h"

int read_numbers(const char *filename, int *numbers, int max_count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        return -1;  // Greška pri otvaranju datoteke
    }
    int count = 0;
    while (count < max_count && fscanf(file, "%d", &numbers[count]) == 1) { //U petlji smo dok je count manji od max_count i fscanf uspješno čita brojeve i upisuje ih u numbers
        count++;
    }
    fclose(file);
    return count;
}

int write_result(const char *filename, float result) {
    FILE *file = fopen(filename, "a");
    if (!file) {
        return -1;  // Greška pri otvaranju datoteke
    }
    fprintf(file, "%.2f\n", result);  // Zapisivanje rezultata s dvije decimale
    fclose(file);
    return 0;
}
