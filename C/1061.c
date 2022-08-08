#include <stdio.h>

int main() {
    int d, h, m, s;
    int timestamp[] = {0, 0};

    for (int i = 0; i < 2; i++) {
        int temp;
        scanf("%*s %d", &temp);
        timestamp[i] += temp * 86400;
        scanf("%d", &temp);
        timestamp[i] += temp * 3600;
        scanf("%*s %d", &temp);
        timestamp[i] += temp * 60;
        scanf("%*s %d", &temp);
        timestamp[i] += temp;
    }

    s = timestamp[1] - timestamp[0];

    printf("%d dia(s)\n", d = s / 86400);
    s -= d * 86400;
    printf("%d hora(s)\n", h = s / 3600);
    s -= h * 3600;
    printf("%d minuto(s)\n", m = s / 60);
    s -= m * 60;
    printf("%d segundo(s)\n", s);

    return 0;
}