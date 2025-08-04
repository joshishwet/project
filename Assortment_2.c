#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

   
    int max = arr[0][0];

   
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            if(arr[i][j] > max) 
            {
                max = arr[i][j];
            }
        }
    }

    printf("The largest element in the array is: %d", max);

}
==============================================================================================================

                                            output 
Enter number of rows: 3
Enter number of columns: 3
Enter elements of the array:
1 2 4
1 5 8
4 9 5
The largest element in the array is: 9
