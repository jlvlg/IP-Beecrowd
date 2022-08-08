#include <stdio.h>
#include <math.h>

int main() {
    int tests;
    int led[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int led_amount = 0;

    scanf("%d", &tests);

    for (int i = 0; i < tests; i++) {
        char value[100];

        led_amount = 0;
        scanf("%s", value);

        for (int j = 0; j < strlen(value); j++) {
            led_amount += led[value[j]-48];
        }
        
        printf("%d leds\n", led_amount);
    }

    return 0;
}