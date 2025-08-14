#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    int len = stringLength(str);
    printf("The length of the string is: %d\n", len);

}
===================================================================================================================================

                                                               output 
Enter any string: hello-world
The length of the string is: 11
                                                               