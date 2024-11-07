#include <stdio.h>
#include <assert.h>
#include "compute.h"

void test_compute_sum() {
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = compute_sum(numbers, 5);
    assert(sum == 15);
}

void test_compute_average() {
    int numbers[] = {1, 2, 3, 4, 5};
    float avg = compute_average(numbers, 5);
    assert(avg == 3.0);
}

void test_compute_moving_average() {
    int numbers[] = {1, 2, 3, 4, 5};
    float avg = compute_moving_average(numbers, 5, 3);
    assert(avg == 4.0);
}

int main() {
    test_compute_sum();
    test_compute_average();
    test_compute_moving_average();
    printf("Testovi za compute prošli\n");
    return 0;
}
