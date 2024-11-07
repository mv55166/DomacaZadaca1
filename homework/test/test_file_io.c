#include <stdio.h>
#include <assert.h>
#include "file_io.h"

void test_read_numbers() {
    int numbers[100];
    int count = read_numbers("input.txt", numbers, 100);
    assert(count > 0); //ako je count manji od 0, došlo je do greške
}

void test_write_result() {
    int result = write_result("output.txt", 123.45);
    assert(result == 0); //write result vraća 0 ako je podatak uspješno upisan
}

int main() {
    test_read_numbers();
    test_write_result();
    printf("Testovi za file_io prošli\n");
    return 0;
}
