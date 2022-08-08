#include <stdio.h>
#include <string.h>

int main() {
    char numbers[2][1001];
    int tests, fits;
    scanf("%d", &tests);

    for (int i=0; i < tests; i++) {
        scanf("%s %s", numbers[0], numbers[1]);
        fits = 1;
        for (int j=0; j < strlen(numbers[1]) && fits == 1; j++) {
            if (numbers[0][strlen(numbers[0])-j-1] != numbers[1][strlen(numbers[1])-j-1]) {
                fits = 0;
            }
        }
        printf("%s\n", fits ? "encaixa" : "nao encaixa");
    }

    return 0;
}