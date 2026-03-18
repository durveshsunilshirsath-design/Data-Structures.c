#include<stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int i, j, rows, cols;

    printf("Enter rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    if(rows > 10 || cols > 10) {
        printf("Matrix size should be <= 10\n");
        return 0;
    }

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nAddition of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);   // added space
        }
        printf("\n");
    }

    printf("\nSubtraction of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);   // added space
        }
        printf("\n");
    }

    return 0;
}
