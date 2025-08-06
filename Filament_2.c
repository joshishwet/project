#include <stdio.h>
int main()
{
    char str[50];
    int a[200] = {0};  
    int j, length = 0;
    
    printf("Enter any string: ");
    gets(str);
 
    for (j = 0; str[j] != '\0';j++) 
    {
        length++;
    }
   
    for (j = 0; j < length; j++) 
    {
        a[(int)str[j]]++;
    }

    printf("\nFrequency of each character:\n");
    for (j = 0; j < 256; j++) 
	{
        if (a[j] != 0)
            printf("%c => %d\n", j, a[j]);
    }

} 
===================================================================================================================================
                                                    output
 Enter any string: shwet

 Frequency of each character:
e => 1
h => 1
s => 1
t => 1
w => 1                                           