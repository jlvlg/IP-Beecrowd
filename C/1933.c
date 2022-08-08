#include <stdio.h>

int main() {
    int first, second;

    scanf("%d %d", &first, &second);

    if (first == second) {
        printf("%d\n", first);
    } else {
        printf("%d\n", (first > second) ? first : second);
    }

    return 0;
}
