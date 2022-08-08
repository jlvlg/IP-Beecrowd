#include <stdio.h>
 
int main() {
    int distance;
    float consumption;

    scanf("%d", &distance);
    scanf("%f", &consumption);

    printf("%.3f km/l\n", distance/consumption);
    return 0;
}