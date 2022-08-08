#include <stdio.h>

int main() {
    int x, z;
    int sum = 0, counter = 0;

    scanf("%d", &x);

    do {
        scanf("%d", &z);
    } while (z <= x);

    for (int i = x; sum < z; i++) {
        sum += i;
        counter++;
    }
    
    printf("%d\n", counter);

    return 0;
}