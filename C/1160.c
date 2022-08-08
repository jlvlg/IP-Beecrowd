#include <stdio.h>
#include <math.h>

int main() {
    int tests, pa, pb, years;
    double ga, gb;

    scanf("%d", &tests);

    for (int i = 0; i < tests; i++) {
        years = 0;

        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
    
        while (pa <= pb && years < 100) {
            pa += pa*ga/100;
            pb += pb*gb/100;
            years++;
        }

        if (pa <= pb) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}