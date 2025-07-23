#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, realNumber;

    printf("Enter any number: ");
    scanf("%d", &number);

    realNumber = number;          
    lastDigit = number % 10;     

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);

}

===========================================================================================================================
                                                  output
Enter any number: 49
The sum of the first and the last digit: 13                                                