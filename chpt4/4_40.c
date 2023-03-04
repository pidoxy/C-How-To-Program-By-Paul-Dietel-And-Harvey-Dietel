#include <stdio.h>

int main() {
    long long current_population = 7874965825LL; // current world population as of March 2023
    double growth_rate = 1.05; // assumed constant annual growth rate in percent
    
    printf("Year\tPopulation\tIncrease\n");
    for (int year = 1; year <= 75; year++) {
        long long population_next_year = current_population * (1 + growth_rate/100) * year;
        long long increase = population_next_year - current_population;
        printf("%d\t%lld\t%lld\n", year, population_next_year, increase);
        
        if (population_next_year >= current_population * 2) {
            printf("\nThe population will be double in %d years (%lld).\n", year, population_next_year);
            break;
        }
    }
    
    return 0;
}
