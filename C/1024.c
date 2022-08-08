#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int quantity;

    scanf("%d", &quantity);

    {char lines[quantity][1000];
        for (int line = 0; line < quantity; line++) {
            scanf(" %[^\n]%*c", lines[line]);
        }
        for (int line = 0; line < quantity; line++) {
            for (int c = 0; c < strlen(lines[line]); c++) {
                if (isalpha(lines[line][c])) {
                    lines[line][c] += 3;
                }
            }
            for (int c = 0; c < strlen(lines[line])/2; c++) {
                char temp = lines[line][c];
                lines[line][c] = lines[line][strlen(lines[line]) - c - 1];
                lines[line][strlen(lines[line]) - c - 1] = temp;
            }
            for (int c = strlen(lines[line])/2; c < strlen(lines[line]); c++) {
                lines[line][c]--;
            }
            printf("%s\n", lines[line]);
        }
    }
    return 0;
}