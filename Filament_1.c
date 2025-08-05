#include <stdio.h>
int main() 
{
    char str[50];
    int a, b, length = 0, Palindrome = 1;


    printf("Enter any string: ");
    gets(str);
  
    for (a = 0; str[a] != '\0'; a++) {
        length++;
    }

    for (a = 0, b = length - 1; a < b; a++, b--) {
        if (str[a] != str[b]) {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

}

===================================================================================================================================
                                                    Output 

Enter any string: navgvan

The given string is a Palindrome. 
  
Enter any string: shwet
The given string is not a Palindrome.

