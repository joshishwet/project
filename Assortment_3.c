#include <stdio.h>
int main() 
{
    
	int a;  
    printf("Enter the array's row & column size: ");
    scanf("%d", &a);

    int arr[a][a];

    printf("Enter array's elements:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

==============================================================================================================

                                             output 
Enter the array's row & column size: 2
Enter array's elements:
a[0][0] = 3
a[0][1] = 4
a[1][0] = 5
a[1][1] = 5
The transpose matrix of an array:
3 5 
4 5                                              