#include <stdio.h>

int main() 
{
    int n, i;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    printf("Negative elements in the array are:");
    for(i = 0; i < n; i++) 
    {
        if(arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

==============================================================================================================

                                               output

  Enter the size of the array: 3
Enter 3 elements:-1-2-4
Negative elements in the array are:-1 -2 -4                                              