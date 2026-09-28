#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int sumMatrix[rows][cols];
    printf("\nEnter elements for Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("\nEnter elements for Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    printf("\nResultant Sum Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
