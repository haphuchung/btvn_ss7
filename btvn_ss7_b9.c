#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Nhap cac phan tu trong ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Cac phan tu tren duong bien cua ma tran:\n");

    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[0][j]);
    }

    for (int i = 1; i < rows; i++) {
        printf("%d ", matrix[i][cols - 1]);
    }

    if (rows > 1) {
        for (int j = cols - 2; j >= 0; j--) {
            printf("%d ", matrix[rows - 1][j]);
        }
    }

    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
    }

    printf("\n");

    return 0;
}
