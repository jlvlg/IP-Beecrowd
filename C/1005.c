#include <stdio.h>
 
int main() {
    double num1, num2;

    scanf("%lf", &num1);
    scanf("%lf", &num2);

    num1 *= 3.5;
    num2 *= 7.5;

    printf("MEDIA = %.5lf\n", (num1 + num2)/11);

    return 0;
}