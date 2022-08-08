#include <stdio.h>
 
int main() {
    int time, speed;
    float distance;

    scanf("%d", &time);
    scanf("%d", &speed);

    distance = time*speed;

    printf("%.3f\n", distance/12);
    return 0;
}