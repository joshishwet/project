#include <stdio.h>


void findCubes(int *arrayPointer, int totalRows, int totalCols) 
{
    printf("\nCubes of all elements:\n");

    for (int rowIndex = 0; rowIndex < totalRows; rowIndex++) 
    {
        for (int colIndex = 0; colIndex < totalCols; colIndex++) 
        {
            int currentElement = *arrayPointer;      
            int cubeValue = currentElement * currentElement * currentElement; 
            printf("%d\t", cubeValue);
            arrayPointer++;
        }
        printf("\n");
    }
}

int main() 
{
    int matrixSize;

    printf("Enter array's size: ");
    scanf("%d", &matrixSize);

    int numberArray[matrixSize][matrixSize];

    printf("Enter array elements:\n");
    for (int row = 0; row < matrixSize; row++) 
    {
        for (int col = 0; col < matrixSize; col++) 
        {
            printf("a[%d][%d]-", row, col);
            scanf("%d", &numberArray[row][col]);
        }
    }

    findCubes((int *)numberArray, matrixSize, matrixSize);

    
}
===================================================================================================================================

                                                       output
Enter array's size: 4
Enter array elements:
a[0][0]-2
a[0][1]-3
a[0][2]-4
a[0][3]-4
a[1][0]-5
a[1][1]-5
a[1][2]-6
a[1][3]-3
a[2][0]-5
a[2][1]-5
a[2][2]-4
a[2][3]-6
a[3][0]-4
a[3][1]-4
a[3][2]-3
a[3][3]-3

Cubes of all elements:
8	27	64	64	
125	125	216	27	
125	125	64	216	
64	64	27	27	                                                    