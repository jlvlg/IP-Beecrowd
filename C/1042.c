#include <stdio.h>

int main() {
    int input[3], output[3];

    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    output[0] = input[0];
    output[1] = input[1];
    output[2] = input[2];

    if (input[1] > input[2]) {
        output[2] = input[1];
        output[1] = input[2];
    }
    if (output[0] > output[1]) {
        int temp = output[0];
        output[0] = output[1];
        output[1] = temp;
    }
    if (output[1] > output[2]) {
        int temp = output[1];
        output[1] = output[2];
        output[2] = temp;
    }

    printf("%d\n%d\n%d\n", output[0], output[1], output[2]);
    printf("\n%d\n%d\n%d\n", input[0], input[1], input[2]);

    return 0;
}