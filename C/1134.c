#include <stdio.h>

int main() {
    int input;
    int fuel[] = {0, 0, 0};

    do {
        do {
            scanf("%d", &input);
        } while (input > 4 || input < 1);
        if (input != 4) {
            fuel[input-1]++;
        }
    } while (input != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", fuel[0]);
    printf("Gasolina: %d\n", fuel[1]);
    printf("Diesel: %d\n", fuel[2]);
}