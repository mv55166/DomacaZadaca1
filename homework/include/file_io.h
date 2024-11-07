#ifndef FILE_IO_H //zaštita od višestrukog uključivanja
#define FILE_IO_H

int read_numbers(const char *filename, int *numbers, int max_count);
int write_result(const char *filename, float result);

#endif // FILE_IO_H
