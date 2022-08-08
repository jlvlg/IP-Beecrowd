#include <stdio.h>

int main() {
    int tests, r;
    char sheldon, raj;
    scanf("%d", &tests);
    
    for (int i = 0; i < tests; i++) {
        scanf(" %*c%*c%c%*s %*c%*c%c%*s", &sheldon, &raj);
        printf("Caso #%d: ", i+1);
        if (sheldon == raj) {
            printf("De novo!\n");
        } else {
            switch (sheldon) {
                case 'd':
                    r =  (raj == 's' || raj == 'g');
                    break;
                case 'p':
                    r = (raj == 'd' || raj == 'o');
                    break;
                case 's':
                    r = (raj == 'p' || raj == 'g');
                    break;
                case 'g':
                    r = (raj == 'p' || raj == 'o');
                    break;
                case 'o':
                    r = (raj == 'd' || raj == 's');
                    break;
            }
            if (r == 1) {
                printf("Bazinga!\n");
            } else {
                printf("Raj trapaceou!\n");
            }
        }
    }
    return 0;
}