#include <stdio.h>
int main() {
    int digit, count = 0;

    printf("Enter any digit: ");
    scanf("%d", & digit);

    if (digit == 0) {
        count = 1;
    } else {
        while (digit != 0) {
            digit /= 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

}
---------------------------------------------------------------------------------------------------------------------------
                                                  output
Enter any digit: 4558
Total number of digits: 4