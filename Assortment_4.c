#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter the array's row size: ");
    scanf("%d", &a);
    printf("Enter the array's column size: ");
    scanf("%d", &b);

    int arr[a][b];
    printf("Enter array's elements:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    printf("Enter row number: ");
    scanf("%d", &x);
    int sum1 = 0;
    printf("Elements of row %d: ", x);
    for (int j = 0; j < b; j++) 
    {
        printf("%d ", arr[x][j]);
        sum1 += arr[x][j];
    }
    printf("\nThe sum of row %d: %d\n", x, sum1);

    int y;
    printf("Enter column number: ");
    scanf("%d", &y);
    int sum2 = 0;
    printf("Elements of column %d: ", y);
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i][y]);
        sum2 += arr[i][y];
    }
    printf("\nThe sum of column %d: %d", y, sum2);
}

==============================================================================================================

                                             output

Enter the array's row size: 2
Enter the array's column size: 2
Enter array's elements:
a[0][0] = 1
a[0][1] = 3
a[1][0] = 4
a[1][1] = 4
Enter row number: 2
Elements of row 2: 0 2 
The sum of row 2: 2
Enter column number: 2
Elements of column 2: 4 2 
The sum of column 2: 6                                            