#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int even_count = 0;

    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            even_count++;
        }
    }

    if (even_count == 0) {
        printf("Mang khong chua so chan");
    }

    return 0;
}
