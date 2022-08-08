#include <stdio.h>
 
int main() {
    double money;
    int values[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    scanf("%lf", &money);

    printf("NOTAS:\n");
    int money_int = (money * 100);
    {int i, money_amount;
        for (i=0; i < 12; i++) {
            money_amount = money_int / values[i];
            money_int = money_int % values[i];
            if (i==6) {
                printf("MOEDAS:\n");
            }
            printf("%d %s(s) de R$ %.2f\n", money_amount, (i < 6) ? "nota" : "moeda", values[i]/100.0);        
        }
    }
    return 0;
}