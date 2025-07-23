#include <stdio.h>

int main() {
    char ch = 'a';  
    int count = 1; 

    do {
            printf("%c\n" , ch);
        ch+=4;
    } while (ch <= 'z');
}