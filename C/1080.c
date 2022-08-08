#include <stdio.h>

int main() {
    int largest_i;
    int largest = 0;

    for (int i=1; i<=100; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp > largest) {
            largest = temp;
            largest_i = i;
        }
    }

    printf("%d\n%d\n", largest, largest_i);

    return 0;
}