#ifndef COMPUTE_H //Zaštita od višestrukog uključivanja (multiple inclusion protection)
#define COMPUTE_H

int compute_sum(const int *numbers, int count);
float compute_average(const int *numbers, int count);
float compute_moving_average(const int *numbers, int count, int window_size);

#endif // COMPUTE_H
