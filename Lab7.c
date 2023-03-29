#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int matrixA[4][4];
    int matrixB[4][4];
    int sumOfBothMatrices[4][4];

    //input in matrix A:
    for(int row=0; row<4; ++row)
    {
        for(int col=0; col<4; ++col)
        {
            scanf("%d", &matrixA[row][col]);
        }
    }

    //input in matrix B:
    for(int row=0; row<4; ++row)
    {
        for(int col=0; col<4; ++col)
        {
            scanf("%d", &matrixB[row][col]);
        }
    }
    
    //printing the elements of both matrices.
    printf("Matrix A: \n");
    for(int row=0; row<4; row++)
    {
        for(int col=0; col<4; col++)
        {
            printf("%d,", matrixA[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix B: \n");
    for(int row=0; row<4; row++)
    {
        for(int col=0; col<4; col++)
        {
            printf("%d,", matrixB[row][col]);
        }
        printf("\n");
    }

    //Adding both matrices.
    for(int row=0; row<4; ++row)
    {
    	for(int col=0; col<4; ++col)
    	{
    		sumOfBothMatrices[row][col] = matrixA[row][col] + matrixB[row][col];
    	}
    }

    printf("\nMatrix Sum: \n");
    for(int row=0; row<4; ++row)
    {
    	for(int col=0; col<4; ++col)
    	{
    		printf("%d,", sumOfBothMatrices[row][col]);
    	}
    	printf("\n");
    }    
    return 0;
}
