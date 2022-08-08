#include <stdio.h>

int main() {
    int tasks;

    scanf("%d", &tasks);

    for (int i=0; i < tasks; i++) {
        float temp[3];
        scanf("%f %f %f", &temp[0], &temp[1], &temp[2]);
        printf("%.1f\n", (temp[0]*2+temp[1]*3+temp[2]*5)/10);
    }

    return 0;
}