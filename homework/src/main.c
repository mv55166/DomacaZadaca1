#include <stdio.h>
#include "file_io.h"
#include "compute.h"

int main() {
    int numbers[100];
    int count = read_numbers("input.txt", numbers, 100);
    if (count == -1) {
        printf("Greška pri čitanju datoteke\n");
        return 1;
    }

    float sum = compute_sum(numbers, count);
    float avg = compute_average(numbers, count);
    float moving_avg = compute_moving_average(numbers, count, 5); // window size = 5

    // Otvaranje datoteke za zapisivanje rezultata i dodavanje opisa
    FILE *output = fopen("output.txt", "w");
    if (!output) {
        printf("Greška pri otvaranju datoteke za zapisivanje\n");
        return 1;
    }
    
    // Zapisivanje rezultata s opisima
    fprintf(output, "Zbroj: ");
    fclose(output); // Zatvaramo prije korištenja write_result
    
    write_result("output.txt", sum); // Zapisivanje zbroja
    
    output = fopen("output.txt", "a"); // Ponovo otvaramo u "append" modu da ne prepišemo rezultat
    fprintf(output, "\nProsjek: ");
    fclose(output); // Zatvaramo prije korištenja write_result
    
    write_result("output.txt", avg); // Zapisivanje prosjeka
    
    output = fopen("output.txt", "a"); // Ponovo otvaramo za moving average
    fprintf(output, "\nMoving Average: ");
    fclose(output); // Zatvaramo prije korištenja write_result
    
    write_result("output.txt", moving_avg); // Zapisivanje moving average

    // Ispis svih rezultata na ekran
    printf("Zbroj: %.2f, Prosjek: %.2f, Moving Average: %.2f\n", sum, avg, moving_avg);
    
    return 0;
}
