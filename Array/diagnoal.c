#include <stdio.h>

int main(){
    int rows, cols, rowCounter, colCounter, diagonalSum = 0;
    int inputMatrix[50][50];
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);
     
    printf("Enter first Matrix of size %dX%d\n", rows, cols);
    /*  Input first matrix*/
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
    /* Sum diagonal elements of input matrix. Diagonal elements are those 
       elements whose row and column indexes are same. */
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            if(rowCounter == colCounter){
                diagonalSum += inputMatrix[rowCounter][colCounter];
            }
        }
    }
     
    printf("Sum of all diagonal elements of Matrix is: %d\n", diagonalSum);
    
    return 0;
}