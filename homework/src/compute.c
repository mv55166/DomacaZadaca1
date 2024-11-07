#include "compute.h"

int compute_sum(const int *numbers, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return sum;
}

float compute_average(const int *numbers, int count) {
    if (count == 0) return 0.0; //Izbjegavamo dijeljenje s nulom
    int sum = compute_sum(numbers, count);
    return (float)sum / count; //Pretvaramo sum u float jer bi inače dijeljenje bilo cjelobrojno jer su oba int
}

float compute_moving_average(const int *numbers, int count, int window_size) {
    if (count < window_size) return 0.0; //Ako niz ima manje elemenata nego što je veličina prozora, vraća 0.0 jer nije moguće izračunati pokretni prosjek
    
    float sum = 0.0;
    for (int i = count - window_size; i < count; i++) {
        sum += numbers[i];
    }
    
    return sum / window_size;
}
