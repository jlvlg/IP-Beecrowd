#include <stdio.h>

int main() {
    int input[2];
    int sum = 0;

    scanf("%d %d", &input[0], &input[1]);
    if (input[0] > input[1]) {
        int temp = input[1];
        input[1] = input[0];
        input[0] = temp;
    }

    for (int i = input[0]+1; i < input[1]; i++) {
        sum += (i % 2 != 0) ? i : 0;
    }

    printf("%d", sum);

    return 0;
}