#include <stdio.h>
 
int main() {
    int seconds, minutes;

    scanf("%d", &seconds);

    printf("%d:%d:%d\n", seconds/3600, (seconds / 60) % 60, seconds % 60);
    return 0;
}