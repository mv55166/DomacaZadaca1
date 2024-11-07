#include "compute.h"

int compute_sum(const int *numbers, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return sum;
}

float compute_average(const int *numbers, int count) {
    if (count == 0) return 0.0;
    int sum = compute_sum(numbers, count);
    return (float)sum / count;
}

float compute_moving_average(const int *numbers, int count, int window_size) {
    if (count < window_size) return 0.0;
    
    float sum = 0.0;
    for (int i = count - window_size; i < count; i++) {
        sum += numbers[i];
    }
    
    return sum / window_size;
}
