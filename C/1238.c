#include <stdio.h>
#include <string.h>

int main() {
    char words[2][51], final[101];
    int tests, smaller, j, k;
    scanf("%d", &tests);

    for (int i = 0; i < tests; i++) {
        j = k = smaller = 0;
        scanf("%s %s", words[0], words[1]);

        if (strlen(words[0]) > strlen(words[1])) {
            smaller = 1;
        }
        while (j < strlen(words[smaller])) {
            final[j+k] = words[0][j];
            final[j+k+1] = words[1][j];
            j++;
            k++;
        }
        for (int o = 0; o < strlen(words[!smaller])-j+1; o++) {
            final[j+k+o] = words[!smaller][j+o];
        }

        printf("%s\n", final);
    }

    return 0;
}