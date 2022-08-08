#include <stdio.h>
 
int main() {
    int money;
    int bills[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &money);

    printf("%d\n", money);
    {int i, bill_amount;
        for (i = 0; i < 7; i++) {
            bill_amount = money / bills[i];
            money = money % bills[i];
            printf("%d nota(s) de R$ %d,00\n", bill_amount, bills[i]);
        }
    }
    return 0;
}