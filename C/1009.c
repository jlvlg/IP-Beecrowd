#include <stdio.h>
 
int main() {
    double fixed_salary, bonus;

    scanf("%s");
    scanf("%lf", &fixed_salary);
    scanf("%lf", &bonus);

    printf("TOTAL = R$ %.2lf\n", fixed_salary + (bonus * .15));
    return 0;
}