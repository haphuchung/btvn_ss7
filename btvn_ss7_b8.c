#include <stdio.h>

int main() {
    int m, n;

    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);

    int arr[m][n];

    printf("Nhap cac phan tu cho mang 2 chieu:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu tai vi tri (%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Mang 2 chieu:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
