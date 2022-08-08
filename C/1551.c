#include <stdio.h>
#include <string.h>

int main() {
    char frase[1001];
    char alph[] = "abcdefghijklmnopqrstuvwxyz";
    int tests, counter;
    scanf("%d", &tests);

    for (int i = 0; i < tests; i++) {
        counter = 0;
        scanf(" %[^\n]%*c", frase);
        for (int j = 0; j < strlen(alph); j++) {
            for (int k = 0; k < strlen(frase); k++) {
                if (alph[j] == frase[k]) {
                    counter++;
                    break;
                }
            }
        }
        printf("frase ");
        if (counter == 26) printf("completa\n");
        else if (counter >= 13) printf("quase completa\n");
        else printf("mal elaborada\n");
    }

    return 0;
}