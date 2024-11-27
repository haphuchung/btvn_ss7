#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        while (1) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 != 0) {
                break;
            } else {
                printf("Phan tu phai la so le.\nVui long nhap lai phan tu thu %d: ", i + 1);
            }
        }
    }

    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
