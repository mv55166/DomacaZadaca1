#include <stdio.h>
#include <assert.h>
#include "file_io.h"

void test_read_numbers() {
    int numbers[100];
    int count = read_numbers("input.txt", numbers, 100);
    assert(count > 0); //Ako je došlo do greške, count će biti -1
}

void test_write_result() {
    int result = write_result("output.txt", 123.45);
    assert(result == 0); //Ako je došlo do greške, result će biti -1
}

int main() {
    test_read_numbers();
    test_write_result();
    printf("Testovi za file_io prošli\n"); //Ako nema grešaka, ispisuje se ova poruka
    return 0;
}